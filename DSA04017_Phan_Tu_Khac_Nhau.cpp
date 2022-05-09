#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        int a[n], b[n];
        for(int i = 0;  i < n; i++)     cin >> a[i];
        for(int i = 0;  i < n - 1; i++)     cin >> b[i];

        int check = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] != b[i])    
            {
                check = 1;
                cout << i + 1 << '\n';
                break;
            }
        }
        if(check == 0)  cout << n << '\n';
    }
    return 0;
}