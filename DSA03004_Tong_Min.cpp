#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        sort(s.begin(), s.end());

        string x, y;
        for(int i = 0; i < s.size(); i++)  
            if(s[i] != ' ' && s[i] != '0')
            {
                if(i % 2 == 0)  x += s[i];
                else            y += s[i];
            } 
        
        cout << stoll(x) + stoll(y) << '\n';
    }
    return 0;
}