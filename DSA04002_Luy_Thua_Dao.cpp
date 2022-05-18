#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long dao(long long n)
{
    long long dao = 0;
    while(n > 0)
    {
        dao = dao * 10 + n % 10;
        n/=10; 
    }
    return dao;
}

long long pow(long long n, long long k) 
{
	if (k == 0)     return 1;
	long long tmp = pow(n, k / 2);
	if (k % 2 == 0) return (tmp * tmp)  % mod;
	else return ((tmp * tmp) % mod * n) % mod;
}
int main() 
{
	int t; cin >> t;
	while (t--) 
    {
		long long a;    cin >> a;
		cout << pow(a, dao(a)) << '\n';
	}
}