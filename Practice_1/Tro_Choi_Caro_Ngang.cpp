#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int ok = 1;
char x[20];
int n;
int check1(char a)
{
	int cnt = 0;
	FOR(i, 0, n - 1)
    {
		if (x[i] == a)  cnt++;
		else            cnt = 0;
		if (cnt >= 5)   return 1;
	}
	return 0;
}
void sinh() 
{
	int j = n - 1;
	while (x[j] == 'X' && j >= 0) 
    {
		x[j] = 'O';
		j--;
	}
	if (j == -1)    ok = 0;
	else            x[j] = 'X';
}
int main() 
{
    int test;   cin >> test;
    while(test--)
    {
        char c;
        cin >> n >> c;
        FOR(i, 0, n - 1) x[i] = 'O';
        char a;
        if (c == 'X')   a = 'O';
        else            a = 'X';
        while (ok) 
        {
            if (check1(c) && !check1(a)) 
            {
                FOR(i, 0, n - 1)    cout << x[i];
                cout << '\n';
            }
            sinh();
        }
        ok = 1;
    }
    return 0;
}