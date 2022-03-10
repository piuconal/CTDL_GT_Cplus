#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n, k;   cin >> n >> k;
        int a[55];
        for(int i = 0; i < n; i++)  cin >> a[i];

        sort(a, a + n);
        int m = min(k, n - k);
        int s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++)
            if(i < m)   s2 += a[i];
            else        s1 += a[i];
        cout << s1 - s2 << '\n';
    }
    return 0;
}
