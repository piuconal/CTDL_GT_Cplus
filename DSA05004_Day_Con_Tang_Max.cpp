#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    int res = 1;
    int f[n];
    f[0] = 1;
    for(int i = 1; i < n; i++)
    {
        f[i] = 0;
        for(int j = 0; j < i; j++)
            if(a[j] < a[i])     f[i] = max(f[i], f[j] + 1);
        res = max(res, f[i]);
    }
    return res;
}

int main()
{
    int n;  cin >> n;
    int a[1006];
    for(int i = 0; i < n; i++)  cin >> a[i];
    cout << solve(a, n);
    return 0;
}