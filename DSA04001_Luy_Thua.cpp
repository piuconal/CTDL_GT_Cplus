#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

const int mod  = 1e9 + 7;
ll pow(int a, int n)
{
    if(n == 0)  return 1;
    ll x = pow(a, n/2);
    if(!(n % 2))  return x * x % mod;
    return a * (x * x % mod) % mod;
}
int main()
{
    Fast_Piu;
    int TEST;   cin >> TEST;
    while(TEST--)
    {
        int n, k;  cin >> n >> k;
        cout << pow(n, k) << '\n';
    }
    return 0;
}
