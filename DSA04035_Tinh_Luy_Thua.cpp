#include<bits/stdc++.h>
using namespace std;

#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

const int mod = 1e9 + 7;
long long pow(long long n, long long k) 
{
	if (k == 0)     return 1;
	long long tmp = pow(n, k / 2);
	if (k % 2 == 0) return (tmp * tmp)  % mod;
	else return ((tmp * tmp) % mod * n) % mod;
}
int main()
{
    Fast_Piu;
    long long a, b;
    while(cin >> a >> b)
    {
        if(a == b && a == 0)   return 0; 
		cout << pow(a, b) << '\n'; 
    }
    return 0;
}