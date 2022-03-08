#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;	cin >> t;
	while (t--)
	{
        int n, x;	cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
		{
            cin >> a[i];
            b[i] = abs(x-a[i]);
        }
        
        for (int i = 0; i < n-1; i++)
		{
            int check = 0;
            for (int j = 0; j < n-i-1; j++)
			{
                if (b[j] > b[j+1])
				{
                    check = 1;
                    swap(b[j], b[j+1]);
                    swap(a[j], a[j+1]);
                }
            }
            if (!check)		break;
        }
        for (int i = 0; i < n; i++)		cout << a[i] << " ";
        cout << '\n';
	}
	return 0;
}
