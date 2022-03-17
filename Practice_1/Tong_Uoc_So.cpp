#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

vector<ll> sum(1e6 + 5);
int a, b;
void Solve()
{
    sum[0] = sum[1] = 0;
    FOR(i, 2, b - 1)
        for(int j = 2*i; j <= b; j+=i)  sum[j]+=i;
}
int main()
{
    int cnt = 0;
    cin >> a >> b;
    Solve();
    FOR(i, a, b)
       if(sum[i] > i)   cnt++;
    cout << cnt;
    return 0;
}