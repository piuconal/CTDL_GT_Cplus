#include<bits/stdc++.h>
using namespace std;

int cnt;
void Queen(int a[], int row, int n)
{
    if(row == n)    cnt++;
    else
    {
        for(int i = 0; i < n; i++)
        {
            bool check = 1;
            for(int j = 0; j < row; j++)
                if(i == a[j] || i == a[j] - j + row || i == a[j] + j - row)     check = 0;
            if(check)
            {
                a[row] = i;
                Queen(a, row + 1, n);
            }
        }
    }
}
int main () 
{
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        int a[10];
        Queen(a, 0, n);
        cout << cnt << '\n';
        cnt = 0;
    }
    return 0;
}