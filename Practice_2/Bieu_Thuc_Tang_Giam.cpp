#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   cin >> test;
    for(int i = 1; i <= test; i++)
    {
        cout << "Test " << i << ": ";
        string s;   cin >> s;
        stack<int> st;
        int pos = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'D')
            {
                if(i == 0 || s[i - 1] == 'I')
                {
                    st.push(pos + 1);
                    pos++;
                } 
                st.push(pos + 1);
                pos++;
            }
            else
            {
                while(st.size())
                {
                    cout << st.top();
                    st.pop();
                }
                if(i == 0)
                {
                    cout << pos + 1;
                    pos++;
                }
                if(s[i + 1] != 'D')
                {
                    cout << pos + 1;
                    pos++;
                }
            }
        }
        while(st.size())
        {
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
    return 0;
}