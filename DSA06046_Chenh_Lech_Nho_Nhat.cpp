#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n;	cin >> n;
		int a[100005];
		for(int i = 0; i < n; i++)		cin >> a[i];
		
		sort(a, a + n);
		int min = a[1] - a[0];
		for(int i = 1; i < n - 1; i++)
			if(min > a[i + 1] - a[i])	min = a[i + 1] - a[i];
		
		cout << min << '\n';
	}
	return 0;
}