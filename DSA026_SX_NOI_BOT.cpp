#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	int a[105];
	for(int i = 0; i <= n - 1; i++)		cin >> a[i];
	for (int i = 0; i <= n-2; i++)
    {
        int min = i+1, ok = 0;
        for (int j = 0; j <= n-i-2; j++)
			if (a[j] > a[j+1])		
			{
				ok = 1;
				swap(a[j],a[j+1]);
			}
		
		if(ok)	
		{
			cout << "Buoc " << i + 1 << ": ";
			for(int k = 0; k <= n - 1; k++)		cout << a[k] << ' ';
		}
		else	break;
		cout << '\n';
	}
    return 0;
}