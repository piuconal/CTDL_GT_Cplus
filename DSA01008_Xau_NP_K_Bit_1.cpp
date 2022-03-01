#include <bits/stdc++.h>
using namespace std;

int check(string s, int k)
{
    int n = s.size(), cnt = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')    cnt++;
    if(cnt == k)    return 1;
    return 0;
}

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n, k;	cin >> n >> k;
        string a;
        for (int i = 0; i <= n - 1; i++)		a += '0';
        while(1)
        {
            if (check(a, k))
            {
                for (int i = 0; i <= a.size() - 1; i++)		cout << a[i];
                cout << '\n';
            }
            int ok = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == '0')
                {
                    ok = 1;
                    a[i] = '1';
                    for(int j = i + 1; j <= n - 1; j++)		a[j] = '0';
                    break;
                }
            }
            if (ok == 0)
            break;
        }
    }
}