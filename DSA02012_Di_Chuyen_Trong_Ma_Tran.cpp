#include<bits/stdc++.h>
using namespace std;

int n, m, a[111][111];
int count(int m, int n) 
{
	if (m == 1 || n == 1)       return 1;
	return count(m - 1, n) + count(m, n - 1);
}
main()
{
    int test;   cin >> test;
    while(test--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)  
            for(int j = 0; j < m; j++)  cin >> a[i][j];
        cout << count(n, m) << '\n';
    }
}


