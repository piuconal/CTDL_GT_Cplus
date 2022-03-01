#include<bits/stdc++.h>
using namespace std;
 
int main () 
{
	int test;	cin >> test;
	while(test--)
	{
		int n, k;	cin >> n >> k;
		
		int a[20], b[20], cnt = 1;
	    for (int i = 1; i <= k; i++)	
		{
			cin >> a[i];
			b[cnt++] = a[i];
		}

		if(b[k] == n && b[1] == n-k+1)	cout << k << '\n';
		else
		{
			int i = k;
			while (i > 0 && a[i] == n-k+i)	i--;
			if (i > 0) 
			{
				a[i]++;
				for (int j = i+1; j <= k; j++)	a[j] = a[i] + j - i;
			} 
			else
				for (int j = i+1; j <= k; j++)	a[j] = j;

			int cnt2 = 0;
			for(int i = 1; i <= k; i++)
				for(int j = 1; j <= k; j++)
					if(a[i] == b[j])	cnt2++;
			cout << (k - cnt2) << '\n';
		}
	}
	return 0;
}