#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int n = s.size();
    if(s[0] == 'A' || s[n - 1] == 'H')  return 0;
    else
    {
        for (int i = 0; i < n; i++)
            if (s[i] == s[i + 1] && s[i] == 'H')   return 0;
        return 1;
    }
}

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;	cin >> n;
        string a;
        for (int i = 0; i <= n - 1; i++)		a += 'A';
        while(1)
        {
            if (check(a))
            {
                for (int i = 0; i <= a.size() - 1; i++)		cout << a[i];
                cout << '\n';
            }
            int ok = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[i] == 'A')
                {
                    ok = 1;
                    a[i] = 'H';
                    for(int j = i + 1; j <= n - 1; j++)		a[j] = 'A';
                    break;
                }
            }
            if (ok == 0)
            break;
        }
    }
}