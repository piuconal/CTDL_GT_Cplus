#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
        if(abs(a[i] - a[i + 1]) == 1)   return false;
    return true;    
}
int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        int a[12];
        for(int i = 0; i < n; i++)  a[i] = i + 1;
        do
        {
            if(check(a, n) == true)
            {  
                for(int i = 0; i < n; i++)  cout << a[i];
                cout << " \n";
            }
        } 
        while (next_permutation(a, a + n));
    }
    return 0;
}