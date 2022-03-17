#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

ll F[100];
char Fw(int n, ll k)
{
    if(n == 1)  return 'A';
    if(n == 2)  return 'B';
    if(k <= F[n - 2])   return Fw(n - 2, k);
    return Fw(n - 1, k - F[n - 2]);  
}
int main()
{
    F[0] = 0, F[1] = 1;
    FOR(i, 2, 92)   F[i] = F[i - 1] + F[i - 2];
    int TEST;   cin >> TEST;
    while(TEST--)
    {
        int n; ll k;
        cin >> n >> k;
        cout << Fw(n, k) << '\n';
    }
    return 0;
}
