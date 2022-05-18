#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> ans; 
    int tmp;    cin >> tmp;
    cin.ignore();
    string s;
    while(cin >> s)
    {
        if(s == "PUSH")     
        {   
            int n;  cin >> n;
            ans.push(n);
        }
        else if(s == "POP" && !ans.empty()) ans.pop();
        else if(s == "PRINT")
        {
            int ok = 0;
            if(ans.size() > 0)        cout << ans.top() << '\n';
            else                      cout << "NONE\n";
        }
    }
    return 0;
}