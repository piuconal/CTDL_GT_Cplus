#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int main()
{
    Fast_Piu;
    int test;   cin >> test;
    while(test--)
    {
        ll n, m;   cin >> n >> m;
        ll res = 0;
        ll a[n];
        FOR(i, 0, n - 1)    cin >> a[i];

        sort(a, a + n);
        FOR(i, 0, n - 1)
            FOR(j, i + 1, n - 1)
            {
                ll x = lower_bound(a + j + 1, a + n, m - a[i] - a[j]) - a;
                if(a[i] + a[j] + a[x] <= m && res < a[i] + a[j] + a[x])
                    res = a[i] + a[j] + a[x];
            }
        cout << res << '\n';
    }    
    return 0;
}