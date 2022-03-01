#include<bits/stdc++.h>
using namespace std;
 
int main () 
{
	int test;	cin >> test;
	while(test--)
	{
		int n, k;	cin >> n >> k;
		
		int a[20], ok = 0;
	    for (int i = 1; i <= k; i++)	a[i] = i;
	    
	    do 
		{
	        for (int i = 1; i <= k; i++)	cout << a[i];
    		cout << ' ';
	        
	        int i = k;
		    while (i > 0 && a[i] == n-k+i)	i--;
		    if (i > 0) 
			{
		        a[i]++;
		        for (int j = i+1; j <= k; j++)	a[j] = a[i] + j - i;
		    } 
			else	ok = 1;
	    } 
		while (ok == 0);
		cout << '\n';
	}
	return 0;
}