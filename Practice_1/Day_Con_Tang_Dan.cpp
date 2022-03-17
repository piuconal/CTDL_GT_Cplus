#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int n, a[22] = {};
vector<string> ans;
vector<int> tmp;
void in()
{
    string s = "";
    for(int &i : tmp)   s += to_string(i) + " ";
    ans.push_back(s);
}
void Try(int i)
{
    FOR(j, i + 1, n)
        if(a[j] > a[i])
        {
            tmp.push_back(a[j]);
            if(sz(tmp) > 1)     in();
            Try(j);
            tmp.pop_back();
        }
}

int main()
{
    Fast_Piu;
    cin >> n;
    FOR(i, 1, n)    cin >> a[i];
    Try(0);
    sort(ans.begin(), ans.end());
    for(string &i : ans)     cout << i << '\n';
    return 0;
}