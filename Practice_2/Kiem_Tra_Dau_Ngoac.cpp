#include<bits/stdc++.h>
using namespace std;


stack<char> piu;
int solve(string s)
{
    while(!piu.empty())  piu.pop();
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')   piu.push(s[i]);
        else
        {
            if(piu.empty())  return 0;
            if(s[i] == ')' && piu.top() == '(')      piu.pop();
            else if(s[i] == ']' && piu.top() == '[') piu.pop();
            else if(s[i] == '}' && piu.top() == '{') piu.pop();
            else return 0;
        }
    }
    if(piu.size() == 0)  return 1;
    return 0;
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        string s;   cin >> s;
        if(solve(s))    cout << "true\n";
        else            cout << "false\n";
    }
    return 0;    
}