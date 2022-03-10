#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
void input(vector<long long> &a)
{
    vector<long long>:: iterator it;
    for(it = a.begin(); it != a.end(); it++)  cin >> *it;
}

void solve(vector<long long> &a)
{
    sort(a.begin(), a.end());
    long long res = 0;
    for(int i = 0; i < a.size();i++) 
        res = ((res % mod) + ((a[i] * i) % mod)) % mod;
    cout << res << endl;
}

int main() 
{
    int t;  cin >> t;
    while(t--)
    {
        long long n;    cin >> n;
        vector<long long> a(n);
        input(a);
        solve(a);
    }
    return 0;
}
