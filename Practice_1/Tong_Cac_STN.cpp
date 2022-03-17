#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int a[100], cnt, n, ok = 1;
void Start() 
{
	cnt = 1;
	a[1] = n;
}

void sinh() 
{
	int i = cnt;
	while (i >= 1 && a[i] == 1)     i--;
	if (i == 0)         ok = 0;
	else 
    {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i], r = d % a[i];
		if (q) 
        {
			FOR(j, 1, q)    a[i + j] = a[i];
			cnt += q;
		}
		if (r) 
        {
			a[cnt + 1] = r;
			cnt++;
		}
	}
}
int main() 
{
    Fast_Piu;
	int t;  cin >> t;
	while (t--) 
    {
		cin >> n;
		Start();
		ok = 1;
		int res = 0;
		while (ok) 
        {
			res++;
			sinh();
		}
		cout << res << '\n';
		ok = 1;
		Start();
		while (ok) 
        {
			cout << "(";
			FOR(i, 1, cnt - 1)  cout << a[i] << " ";
			cout << a[cnt] << ") ";
			sinh();
		}
		cout << '\n';
	}
}