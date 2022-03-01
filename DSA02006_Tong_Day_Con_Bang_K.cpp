#include<bits/stdc++.h>
using namespace std;

int a[15], n, k;
vector<int> X;
vector<vector<int>> Y;
void in(string s)
{
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')     X.push_back(a[i]);
    Y.push_back(X);

    cout << '[';
    for (int i = 0; i < X.size() - 1; i++)      cout << X[i] << ' ';
    cout << X[X.size() - 1] << "] ";
    X.clear();
}
bool check(string s)
{
    int sum = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')     sum+=a[i];
    return (sum == k); 
}

void Try(string s)
{
    if(s.size() == n)
    {
        if(check(s))    in(s);
    }
    else
    {
        Try(s + '1');
        Try(s + '0');
    }
}
int main()
{
    int test;   cin >> test;
    while(test--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)  cin >> a[i];
        sort(a, a + n);
        Y.clear();
        Try("");
        if(Y.size() == 0)   cout << -1;
        cout << '\n';
    }
    return 0;
}