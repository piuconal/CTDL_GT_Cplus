#include <bits/stdc++.h>
using namespace std;

void chuyen (int n, char nguon, char trungGian, char dich)
{
    if (n == 1)
        cout << nguon << " -> " << dich << '\n';
    else
	{
        chuyen (n-1, nguon, dich, trungGian);
        chuyen (1, nguon, trungGian, dich);
        chuyen (n-1, trungGian, nguon, dich);
	}
}
int main ()
{
    int n;
    cin >> n;
	chuyen (n, 'A', 'B', 'C');
}