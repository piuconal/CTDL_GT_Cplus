#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n;	cin >> n;
		int a[1005];
		for(int i = 0; i <= n - 1; i++)		cin >> a[i];
		sort(a, a + n);
		if(n % 2 == 0)
			for(int i = 0; i < n/2; i++)		cout << a[n - i - 1] << ' ' << a[i] << ' ';
		else
		{
			for(int i = 0; i <= n/2 - 1; i++)		cout << a[n - i - 1] << ' ' << a[i] << ' ';
			cout << a[n/2];
		}
		cout << '\n';
	}
	return 0;
}