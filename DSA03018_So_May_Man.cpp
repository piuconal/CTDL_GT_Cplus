#include<bits/stdc++.h>
using namespace std;

void solve(int sum)
{
    int a = 0, b = 0;
    while(sum > 0) 
    {
        if(sum % 7 == 0)
        {
            b++;
            sum -= 7;
        }
        else
        {
            a++;
            sum -= 4;
        }
    }

    if(sum < 0) cout << - 1;
    else
    {
        for(int i = 0; i < a; i++)    cout << 4;
        for(int j = 0; j < b; j++)    cout << 7;
    }
}

int main()
{
    int t;  cin >> t;
    while(t--)
    {
        int sum;    cin >> sum;
        solve(sum);
        cout << '\n';
    }
    return 0;
}
