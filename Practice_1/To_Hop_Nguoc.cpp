#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

int main()
{
    Fast_Piu;
    int test;	cin >> test;
	while(test--)
	{
		int n, k;	cin >> n >> k;
		vector<int> cnt;
		int a[20], ok = 0;
	    FOR(i, 1, k)	a[i] = i;
	    do 
		{
	        FOR(i, 1, k)	cnt.push_back(a[i]);
	        int i = k;
		    while (i > 0 && a[i] == n-k+i)	i--;
		    if (i > 0) 
			{
		        a[i]++;
		        FOR(j, i+1, k)	a[j] = a[i] + j - i;
		    } 
			else	ok = 1;
	    } 
        while (ok == 0);
        int tmp = 1;
        int piu = sz(cnt);
        FOD(i, sz(cnt)/k - 1, 0) 
        {
            FOR(j, sz(cnt) - k * tmp, piu - 1)
                cout << cnt[j] << ' '; 
    		cout << '\n';
            tmp++;
            piu -= k;
        }
        cnt.clear();
    }
    return 0;
}


