#include<bits/stdc++.h>
using namespace std;

void dao_tu(string s)
{
    for(int i = s.size() - 1; i >= 0; i--)  cout << s[i];
    cout << ' ';
}

int main()
{
    int test;   cin >> test;
    cin.ignore();
    while(test--)
    {
        string S;   getline(cin, S);
        string token, a[100];

        stringstream ss(S);
        int cnt = 0;
        while(ss >> token)      a[cnt++] = token;

        for(int i = 0; i < cnt; i++)    dao_tu(a[i]);

        cout << '\n';
    }
    return 0;
}