#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    string a;
    for (int i = 0; i <= n - 1; i++)		a += '8';
    vector <char> ans;
    while(1)
    {
        for (int i = 0; i <= a.size() - 1; i++)     ans.push_back(a[i]);
        
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '8')
            {
                ok = 1;
                a[i] = '6';
                for(int j = i + 1; j <= n - 1; j++)		a[j] = '8';
                break;
            }
        }
        if (ok == 0)
        break;
    }
    int cnt = 0;
    for(int i = 0; i < ans.size(); i++)   
    {
        cout << ans[i];
        cnt++;
        if(cnt % n == 0)    cout << ' ';
    }
}
int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;	cin >> n;
        for(int i = n; i >= 1; i--)     solve(i);
        cout << '\n';
    }
}