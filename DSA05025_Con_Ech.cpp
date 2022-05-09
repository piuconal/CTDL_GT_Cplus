#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;   cin >> n;
        long long ans[n + 5] = {0};
        ans[1] = 1;
        ans[2] = 2;
        ans[3] = 4;
        for(int i = 4; i <= n; i++)
            ans[i] += (ans[i - 1] + ans[i - 2] + ans[i - 3]);
        cout << ans[n] << '\n';
    }
    return 0;
}