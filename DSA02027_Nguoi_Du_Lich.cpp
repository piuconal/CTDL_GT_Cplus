#include<bits/stdc++.h>
using namespace std;

int n, min_cost, ans, cost[20][20], x[20], cur_sum = 0;
bool vis[20];
void Try(int k)
{
    if ((cur_sum + min_cost * (n - k + 1)) >= ans)  return;
    for (int i = 2; i <= n; i++)
    {
        if (!vis[i])
        {
            x[k] = i;
            vis[i] = true;
            cur_sum += cost[x[k - 1]][i];
            if (k == n)     ans = min(ans, cur_sum + cost[x[n]][1]);
            else            Try(k + 1);
            vis[i] = false;
            cur_sum -= cost[x[k - 1]][i];
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)    cin >> cost[i][j];
        
    ans = min_cost = INT_MAX;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)     min_cost = min(min_cost, cost[i][j]);
    memset(vis, false, sizeof(vis));
    x[1] = 1;
    vis[1] = true;
    Try(2);
    cout << ans;
    return 0;
}