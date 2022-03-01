#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n;	cin >> n;
		int	a[100005];
		for(int i = 0; i <= n - 1; i++)		cin >> a[i];
		
		int ok = 0;
		for(int i = 0; i <= n - 2; i++)
		{
			for(int j = i+1; j <= n - 1; j++)
				if(a[i] == a[j])
				{
					ok = 1;
					cout << a[i] << '\n';
				}
			if(ok == 1)		break;
		}
		if(ok == 0)		cout << "NO\n";
	}
	return 0;
}