#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  cin >> n;
    int a[10005], am = 0, duong = 0;
    for(int i = 0;  i < n; i++)     
    {
        cin >> a[i];
        if(a[i] < 0)    am++;
        else            duong++;
    }

    sort(a, a + n);

    if(duong == 0)                                 cout << a[0] * a[1];
    else if(am == 0 || (duong != 0 && am == 1))    cout << a[n - 1] * a[n - 2] * a[n - 3];
    else if(duong != 0 && am > 1)
    {
        int x, y;
        x = a[0] * a[1] * a[n - 1];
        y = a[n - 1] * a[n - 2] * a[n - 3];
        cout << max(x, y);
    }

    cout << '\n';
    return 0;
}