#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;   cin >> test;
    int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    while(test--)
    {
        int n;  cin >> n;
        int cnt = 0;
        while(n > 0)
        {
            for(int i = 9; i >= 0; i--)
            {
                while(n >= money[i])
                {
                    n -= money[i];
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}