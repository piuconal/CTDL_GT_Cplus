#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n;	cin >> n;
		int a[1005];
		for(int i = 0; i < n; i++)		cin >> a[i];
		
		int min = 1e8, ans;
		for(int i = 0; i < n - 1; i++)
			for(int j = i + 1; j < n; j++)
				if(abs(a[i] + a[j]) < min)		
				{
					min = abs(a[i] + a[j]);
					ans = a[i] + a[j];
				}
				
		cout << ans;
		
		cout << '\n';
	}
	return 0;
}