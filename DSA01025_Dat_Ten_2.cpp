#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        int n, k;   cin >> n >> k;
        string s(k, 1);
        s.resize(n, 0);
        do
        {
            for(int i = 0; i < n; i++)
                if(s[i])    cout << char(i + 65);
            cout << '\n';
        } 
        while (prev_permutation(s.begin(), s.end()));

    }
    return 0;
}