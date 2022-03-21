#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, l, r)	for(int i = l; i <= r; i++)
#define FOD(i, r, l)	for(int i = r; i >= l; i--)
#define sz(s)	((int)s.size())
#define Fast_Piu    ios_base::sync_with_stdio(0);   cin.tie(0);

int check(string s, int k) 
{
	int dem = 0, xn = 0;
	FOR(i, 0, sz(s) - 1) 
	{
		if (s[i] == 'A') 
		{
			dem++;
			if (dem == k)	xn = dem;
			if (dem > k)	break;
		}
		else dem = 0;
	}
	if (dem <= xn && xn == k)	return 1;
	return 0;
}
int main()
{
	int n, k;	cin >> n >> k;
	string a;
	FOR(i, 0, n - 1)		a += 'A';
	int ans = 0;
	vector<char> p;
	while(1)
	{
		if (check(a, k))	
		{
			ans++;
			FOR(i, 0, sz(a) - 1)	p.push_back(a[i]);
		}
		int ok = 0;
		FOD(i, n - 1, 0)
		{
			if (a[i] == 'A')
			{
				ok = 1;
				a[i] = 'B';
				FOR(j, i + 1, n - 1)		a[j] = 'A';
				break;
			}
		}
		if (ok == 0)
		break;
	}
	cout << ans << '\n';
	int cnt = 0;
	FOR(i, 0, sz(p) - 1)	
	{
		cout << p[i];
		cnt++;
		if(cnt % n == 0)	cout << '\n';
	}
	return 0;
}