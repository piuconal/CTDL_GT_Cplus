#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    while(test--)
    {
        string s;   cin >> s;
        int n = s.size();
        do
        {
            cout << s << ' ';
        } 
        while (next_permutation(s.begin(), s.end()));
        cout << '\n';
    }
    return 0;
}