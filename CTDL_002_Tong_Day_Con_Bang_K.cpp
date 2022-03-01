#include <bits/stdc++.h>
using namespace std;

int a[22], n, k, ans;
bool check(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')     sum += a[i];
    return (sum == k);
}
void in(string s)
{
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')     cout << a[i] << ' ';
    cout << '\n';
}
void Try(string s)
{
    if(s.size() == n)
    {
        if(check(s))    
        {
            in(s);
            ans++;
        }
    }
    else
    {
        Try(s + '0');
        Try(s + '1');
    }
}

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)  cin >> a[i];
    Try("");
    cout << ans;
    return 0;
}