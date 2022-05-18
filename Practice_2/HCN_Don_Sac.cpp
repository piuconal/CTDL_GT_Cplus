#include<bits/stdc++.h>
using namespace std;

long long a[100005], b[100005];
long long maxarea(long long b[], int n)
{
    stack<int> piu;
    int i = 0;
    long long ans = 0;
    while(i < n)
    {
        if(piu.empty())
        {
            piu.push(i);
            i++;
        }
        else
        {
            if(b[i] >= b[piu.top()])
            {
                piu.push(i);
                i++;
            }
            else
            {
                int tmp = piu.top();
                piu.pop();
                if(piu.empty())
                    ans = max(ans, (long long)(b[tmp] * i));
                else
                    ans = max(ans, (long long)(b[tmp] * (i - piu.top() - 1)));
            }
        }
    }
    while(!piu.empty())
    {
        int tmp = piu.top();
        piu.pop();
        if(piu.empty())
            ans = max(ans, (long long)(b[tmp] * i));
        else
            ans = max(ans, (long long)(b[tmp] * (i - piu.top() - 1)));
    }
    return ans;
}
int main()
{
    int n, m;   cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        a[i] = n - b[i];
    }
    long long ans = max(maxarea(b, m), maxarea(a, m));
    cout << ans;
    return 0;
}