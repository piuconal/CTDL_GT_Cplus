#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
	    int n;	cin >> n;
	    string a;
	    for (int i = 0; i <= n - 1; i++)		a += 'A';
	    while(1)
	    {
	        for (int i = 0; i <= a.size() - 1; i++)		cout << a[i];
	        cout << ' ';
	        int ok = 0;
	        for (int i = n - 1; i >= 0; i--)
	        {
	            if (a[i] == 'A')
	            {
	                ok = 1;
	                a[i] = 'B';
	                for(int j = i + 1; j <= n - 1; j++)		a[j] = 'A';
	                break;
	            }
	        }
	        if (ok == 0)	break;
	    }
	    cout << '\n';
	}
	return 0;
}