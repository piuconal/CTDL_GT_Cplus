#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	int a[105];
	for(int i = 0; i <= n - 1; i++)		cin >> a[i];
	vector<int> b;
	for(int i = 0; i <= n - 1; i++)	
	{
		b.push_back(a[i]);
		sort(b.begin(), b.end());
		cout << "Buoc " << i << ": ";
		for(int i = 0; i <= b.size() - 1; i++)	cout << b[i] << ' ';
		cout << '\n';
	}
    return 0;
}
