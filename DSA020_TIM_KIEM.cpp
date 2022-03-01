#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int binSearch(int a[], int l, int r, int x)
{
	if (r >= l) 
	{
		int mid = l + (r - l) / 2;
		if (a[mid] == x)	return mid;
		if (a[mid] > x)		return binSearch(a, l, mid - 1, x);
		return binSearch(a, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n, k;	cin >> n >> k;
		for(int i = 0; i <= n - 1; i++)		cin >> a[i];
		
		if(binSearch(a, 0, n - 1, k) == -1)	cout << "-1\n";
		else								cout << "1\n";
	}
	return 0;
}

