#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        long n, k;   cin >> n >> k;
        long ans = 1;
        while(k % 2 == 0)
        {
            k /= 2;
            ans++;
        }
        cout << char(ans + 64) << '\n';
    }
    return 0;
}