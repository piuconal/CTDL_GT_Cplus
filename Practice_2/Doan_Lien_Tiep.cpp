#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, ans[N], a[N];
int main()
{
    int test;   cin >> test;
    while(test--)
    {
        memset(ans, 0, sizeof(ans));
        cin >> n;
        for(int i = 0; i < n; i++)  cin >> a[i];

        stack<int> piu;
        for(int i = 0; i < n; i++)
        {
            if(piu.empty())
            {
                ans[i] = 1;
                piu.push(i);
            }
            else
            {
                if(a[i] < a[piu.top()])
                {
                    ans[i] = 1;
                    piu.push(i);
                }
                else
                {
                    while(!piu.empty() && a[i] >= a[piu.top()])     piu.pop();

                    if(piu.empty())     ans[i] = i + 1;
                    else                ans[i] = i - piu.top();
                    piu.push(i);
                }
            }
        }
        for(int i = 0; i < n; i++)  cout << ans[i] << ' ';

        cout << '\n';
    }
    return 0;
}