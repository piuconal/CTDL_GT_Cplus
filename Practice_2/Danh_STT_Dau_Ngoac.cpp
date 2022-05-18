#include<bits/stdc++.h>
using namespace std;

int ans[100005];
int main()
{
    int test;   cin >> test;
    cin.ignore();
    while(test--)
    {
        memset(ans, 0, sizeof(ans));
        string s;   getline(cin, s);
        stack<int> st;
        int cnt = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(cnt);
                ans[i] = cnt;
                cnt++;
            }
            else
            {
                if(s[i] == ')')
                {
                    ans[i] = st.top();
                    st.pop();
                }
            }
        }
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '(' || s[i] == ')')      cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}