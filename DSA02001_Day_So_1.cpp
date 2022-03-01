#include<bits/stdc++.h>
using namespace std;

int n, a[10];
void output(int n)
{
    cout << '[';
    for (int j = 0; j < n; j++)     cout << a[j] << ' ';
    cout << a[n] << ']' << '\n';
}
int main()
{
	int t;  cin >> t;
	while (t--)
    {
        cin >> n;
        for (int i=0; i < n; i++)   cin >> a[i];
        for (int i= n - 1; i >= 0; i--)
        {
            output(i);
            for (int j = 0; j < i; j++)     a[j] += a[j+1];
        }
	}
	return 0;
}