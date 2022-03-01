#include<iostream>
using namespace std;

bool ok;
void sinh(int* M, int n, int k) 
{
	int a = 0;
	for (int i = k; i >= 1; i--) 
    {
		if (M[i] != n - k + i) 
        {
			a = 1;
			M[i]++;
			for (int j = i + 1; j <= k; j++)    M[j] = M[j - 1] + 1;
			break;
		}
	}
	if (a == 0)     ok = true;
}
bool ktra(int* M, int* N, int n) 
{
	for (int i = 1; i <= n; i++)
		if (M[i] != N[i])   return false;
	return true;
}
int main() 
{
	int t; cin >> t;
	while (t--) 
    {
		ok = false;
		int n, k; cin >> n >> k;
		int M[100], N[100];
		for (int i = 1; i <= k; i++) 
        {
			cin >> M[i];
			N[i] = i;
		}
		int cnt = 0;
		while (!ok) 
        {
			cnt++;
			if (ktra(M, N, k)) 
            {
				cout << cnt << endl;
				break;
			}
			sinh(N, n, k);
		}
	}
}