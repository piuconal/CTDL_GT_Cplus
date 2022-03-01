#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n; 	cin >> n;
		
	    vector<int> s(n);
	    iota(begin(s), end(s), 1);
	    
	    for(int n : s)	cout << n; 
		cout << ' ';
	    
		for(int m, k;;)
	    {
	        for (m = n-1; m-- && s[m] >= s[m+1]; );
	        if (m < 0)	break;
	
	        for (k = n; k-- && s[k] <= s[m]; );
	        swap(s[m], s[k]);
	        
			reverse(begin(s) + m+1, end(s));
	        for (int n : s)	cout << n; 
			cout << ' ';
	    }
	    
		cout << '\n';
	}
}