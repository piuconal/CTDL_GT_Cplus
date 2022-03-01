#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	int a[105];
	for(int i = 0; i <= n - 1; i++)		cin >> a[i];
	for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
            if (a[min] > a[j])		min = j;
		if (a[i] > a[min])		swap(a[i],a[min]);
		cout << "Buoc " << i + 1 << ": ";
		for(int k = 0; k <= n - 1; k++)		cout << a[k] << ' ';
		cout << '\n';
	}
    return 0;
}