#include <bits/stdc++.h>
using namespace std;

int n, a[10];
vector<int> v;
void output()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[";
        for (int j = 0; j < i; j++)
        {
            cout << v.back() << " ";
            v.pop_back();
        }
        cout << v.back() << "] ";
        v.pop_back();
    }
    cout << endl;
}
void save(int n)
{
    for (int i = n; i >= 0; i--)    v.push_back(a[i]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = n - 1; i >= 0; i--)
        {
            save(i);
            for (int j = 0; j < i; j++)     a[j] += a[j + 1];
        }
        output();
    }
    return 0;
}
