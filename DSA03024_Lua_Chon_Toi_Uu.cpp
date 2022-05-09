#include <bits/stdc++.h>
using namespace std;

struct task
{
    int fi, se;
}a[100005];

bool cmp(task a, task b)
{
    return a.se < b.se;
}

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        for(int i = 0; i < n; i++)  cin >> a[i].fi >> a[i].se;

        sort(a, a + n, cmp);
        int pos = 0, ans = 1;
        for(int j = 1; j < n; j++)
        {
            if(a[j].fi >= a[pos].se)
            {
                pos = j;
                ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}