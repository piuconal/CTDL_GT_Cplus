#include<bits/stdc++.h>
using namespace std;

int a[100005], n;
int main()
{
	int test;	cin >> test;
	while(test--)
	{
		cin >> n;
		int s_full = 0, s1 = 0, ans = -1;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			s_full += a[i];
		}
		for(int i = 0; i < n; i++)
		{
			if(s1*2 == s_full - a[i])
			{
				ans = i + 1;
				break;
			}
			s1 += a[i];
		}
		cout << ans << '\n';
	}
	return 0;
}