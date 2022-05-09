#include<bits/stdc++.h>
using namespace std;
//29012004
int main()
{
    int test;   cin >> test;    
    while(test--)
    {
        int n, x;   cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++)  cin >> a[i];

        int piu = 0;
        for(int i = 0; i < n; i++)     
        {
            if(a[i] > x)    
            {
                piu = 1;
                if(i == 0)  cout << "-1\n";
                else        cout << i << '\n';
                break;
            }
        }
        if(piu == 0)    cout << "-1\n";
    }
    return 0;
}