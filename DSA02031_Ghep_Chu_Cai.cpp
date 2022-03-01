#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
    for (int i = 2; i <= n - 1; i++)
        if ((a[i] == 1 || a[i] == 5) && 
        (a[i - 1] != 1 && a[i - 1] != 5) && 
        (a[i + 1] != 1 && a[i + 1] != 5))   return 0;
    return 1;
}
int main()
{
    char c; cin >> c;
    int n = c - 64, a[15];
    for(int i = 1; i <= n; i++)  a[i] = i;
    do
    {
        if(check(a, n))
        {
            for(int i = 1; i <= n; i++) cout << char(a[i] + 64);
            cout << '\n';
        } 
    }
    while (next_permutation(a + 1, a + 1 + n));
    
    return 0;
}