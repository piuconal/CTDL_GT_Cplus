#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define sz(s) s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);   cin.tie(0);

int n, k, mod = 1e9 + 7;
ll x[15][15], y[15][15];
void mul(ll a[15][15], ll b[15][15], ll c[15][15])
{
    ll x[15][15], y[15][15];
    FOR(i, 0, n - 1)
        FOR(j, 0, n - 1)
        {
            x[i][j] = a[i][j];
            y[i][j] = b[i][j];
        }
    FOR(i, 0, n - 1)
        FOR(j, 0, n - 1)
        {
            c[i][j] = 0;
            FOR(k, 0, n - 1)
                c[i][j] = (c[i][j] % mod + x[i][k] % mod * y[k][j] % mod) % mod;
        }
}
void add(int n, ll a[15][15])
{
    if (n == 1) return;
    if (n % 2 == 0)
    {
        add(n / 2, a);
        mul(a, a, a);
    }
    else
    {
        add(n / 2, a);
        mul(a, a, a);
        mul(a, y, a);
    }
}
int main()
{
    Fast_Piu;
    int t;  cin >> t;
    while (t--)
    {
        cin >> n >> k;
        FOR(i, 0, n - 1)
            FOR(j, 0, n - 1)
            {
                cin >> x[i][j];
                y[i][j] = x[i][j];
            }
            
        add(k, x);
        ll sum = 0;
        FOR(i, 0, n - 1)
            sum = ((ll)(sum + x[i][n - 1 - i])) % mod;
        cout << sum << '\n';
    }
    return 0;
}