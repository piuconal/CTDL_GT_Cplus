#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int a[100005], n;
int main()
{
    cin >> n;
    FOR(i, 1, n)    cin >> a[i];
    stack<int> st;
    int ans = 0;
    int i = 1;
    while(i <= n)
    {
        if(st.empty())
        {
            st.push(i);
            i++;
        }
        else
        {
            if(a[i] >= a[st.top()])
            {
                st.push(i);
                i++;
            }
            else
            {
                int tmp = st.top();
                st.pop();
                if(st.empty())
                {
                    ans = max(ans, a[tmp] * (i - 1));
                }
                else
                {
                    ans = max(ans, a[tmp] * (i - st.top() - 1));
                }
            }
        }
    }
    while(!st.empty())
    {
        int tmp = st.top();
        st.pop();
        if(st.empty())
        {
            ans = max(ans, a[tmp] *(i - 1));
        }
        else
        {
            ans = max(ans, a[tmp] * (i - st.top() - 1));
        }
    }
    cout << ans;
    return 0;
}