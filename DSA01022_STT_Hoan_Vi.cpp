#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        int a[11];
        for(int i = 0; i < n; i++)  cin >> a[i];

        int ans = 0;
        do
        {
            ans++;
        } 
        while (prev_permutation(a, a + n));
        cout << ans << '\n';
    }
    return 0;
}