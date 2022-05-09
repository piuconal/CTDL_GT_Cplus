#include <bits/stdc++.h>
using namespace std;

int solve(string m, string n)
{
    int mLength = m.size();
    int nLength = n.size();
    int a[mLength + 1][nLength + 1];
    for (int i = 0; i <= mLength; i++)
    {
        for (int j = 0; j <= nLength; j++)
        {
            if (i == 0 || j == 0)   a[i][j] = 0;
            else if (m[i - 1] == n[j - 1])
                a[i][j] = 1 + a[i - 1][j - 1];
            else if (m[i - 1] != n[j - 1])
                a[i][j] = max(a[i - 1][j], a[i][j - 1]);
        }
    }
    return a[mLength][nLength];
}
int main()
{
    int t;  cin >> t;
    while (t--)
    {
        string m, n;    cin >> m >> n;
        cout << solve(m, n) << endl;
    }
}