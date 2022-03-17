#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int Calc(int n, int k, vector<string> a, vector<int> per)
{
    vector<int> num;
    FOR(i, 0, n - 1)
    {
        string tmp;
        FOR(j, 0, k - 1)
            tmp += a[i][per[j]];
        num.push_back(stoi(tmp));
    }
    sort(num.begin(), num.end());
    return (num.back() - num.front());
}
int main()
{
    Fast_Piu;
    int n, k;   cin >> n >> k;
    vector<string> a(n);
    vector<int> per(k);
    for (auto &x : a)   cin >> x;
    FOR(i, 0, k - 1) per[i] = i;
    int res = INT_MAX;
    do
    {
        res = min(res, Calc(n, k, a, per));
    } 
    while (next_permutation(per.begin(), per.end()));
    cout << res;
    return 0;
}