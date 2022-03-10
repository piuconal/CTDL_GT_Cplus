#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string x1, x2;
    x1 = s1; x2 = s2;
    for(int i = 0; i < s1.size(); i++)
    {  
        if(s1[i] == '5')    s1[i] = '6';
        if(x1[i] == '6')    x1[i] = '5';
    }
    for(int i = 0; i < s2.size(); i++)  
    {
        if(s2[i] == '5')    s2[i] = '6';
        if(x2[i] == '6')    x2[i] = '5';
    }
    cout << stoll(x1) + stoll(x2) << ' ' << stoll(s1) + stoll(s2);
    return 0;
}