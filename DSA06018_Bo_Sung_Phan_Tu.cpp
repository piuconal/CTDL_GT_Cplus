#include <bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        int piu[100005] = {};
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            piu[a[i]]++;
        }
        sort(a + 1, a + 1 + n);
        int cnt = 0;
        for(int i = a[1]; i <= a[n]; i++) if(!piu[i]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}