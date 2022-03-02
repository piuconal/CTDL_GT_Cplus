#include<bits/stdc++.h>
using namespace std;
int n, a[11][11];
vector<string> ans;
void Try(int i, int j, string s)
{
    if(i == n - 1 && j == n - 1)        ans.push_back(s);
    if(i < n - 1 && a[i+1][j] == 1)     Try(i+1, j, s+'D');
    if(j < n - 1 && a[i][j+1] == 1)     Try(i, j+1, s+'R');
}
main()
{
    int test;   cin >> test;
    while(test--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < n; j++)  cin >> a[i][j];
        if(a[0][0] == 1)    Try(0, 0, "");
        if(!ans.size())     cout << "-1";
        else
            for(auto i : ans)   cout << i << ' ';
        ans.clear();
        cout << '\n';
    }
}


