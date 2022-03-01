#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 5;
int a[N];

int SearchMin(int a[], int l, int r, int n)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if(a[mid] > a[n - 1])	l = mid + 1;
        else 					r = mid - 1;
    }
    return mid;
}

int Search(int a[], int l, int r, int x)
{
    int mid;
    while(l <= r)
    {
        mid = l + (r - l) / 2;
    	if(a[mid] == x) 	return mid;
        if(a[mid] < x) 		l = mid + 1;
        else 				r = mid - 1;
    }
    return mid;
}
int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n, x;	cin >> n >> x;
		for(int i = 0; i < n; i++)		cin >> a[i];
		
		int ans = SearchMin(a, 0, n - 1, n);
        if(!ans)
        {
            cout << Search(a, 0, n - 1, x) + 1 << '\n';
            continue;
        }
        if(x < a[n - 1])	cout << Search(a, ans, n - 1, x) + 1 << '\n';
        else				cout << Search(a, 0, ans - 1, x) + 1 << '\n';
	}
	return 0;
}