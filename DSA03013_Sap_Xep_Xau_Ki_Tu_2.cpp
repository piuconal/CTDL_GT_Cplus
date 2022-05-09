#include <bits/stdc++.h>
using namespace std;

string s;
int d, n, k;
vector<int> f;

void solve()
{
    cin >> d >> s;
    n = s.size();
    priority_queue<int> q;
    f.clear();
    f.resize(300, 0);
    for(int i = 0; i < n; i++)  f[s[i]]++;
    for(int i = 0; i < 300; i++)
        if (f[i])       q.push(f[i]);
    
    f.clear();
    f.resize(n, 0);
    int vt = 0;
    while (!q.empty())
    {
        k = q.top();
        q.pop();
        for(int i = vt; i < n; i++)
        {
            if (f[i] == 0)
            {
                vt = i;
                while (k--)
                {
                    if (i > n || f[i] == 1)
                    {
                        cout << "-1";
                        return;
                    }
                    f[i] = 1;
                    i += d;
                }
                break;
            }
        }
    }
    cout << "1";
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
        cout << "\n";
    }
}