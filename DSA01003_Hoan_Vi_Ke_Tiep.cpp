#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n;	cin >> n;
		int a[1005];
		for(int i = 0; i < n; i++)	cin >> a[i];
		
		next_permutation(a, a + n);
        for(int i = 0; i < n; i++)	cout << a[i] << ' ';
        cout << '\n';
	}
	return 0;
}
