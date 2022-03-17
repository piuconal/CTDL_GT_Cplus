#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int n, cnt = 0, tmp[15];
char a[22];
void Back(int i) 
{
	if (i == n * 2) 
    {
		cnt++;
		FOR(j, 0, i - 1)    cout << a[j];
		cout << '\n';
		return;
	}
	if (i < n ) 
    {
		FOR(j, 1, n) 
        {
			if (!tmp[j]) 
            {
				a[i] = (char)(j+64);
				tmp[j] = 1;
				Back(i + 1);
				tmp[j] = 0;
			}
		}
	}
	else 
    {
		FOR(j, 1, n) 
        {
			a[i] = (char)(j+48);
			Back(i + 1);
		}
	}
}
int main() 
{
    Fast_Piu;
	cin >> n;
	Back(0);
}
