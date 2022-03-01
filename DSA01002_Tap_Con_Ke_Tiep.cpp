#include<bits/stdc++.h>
using namespace std;
 
int main () 
{
	int test;	cin >> test;
	while(test--)
	{
		int n, k;	cin >> n >> k;
        string s;
        s.resize(n, 0);
        int a[1003];
        for(int i = 0; i < k; i++)
        {
            cin >> a[i];
            s[a[i] - 1] = '1';
        }
		prev_permutation(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++)
            if(s[i])    cout << i + 1 << ' ';
        cout << '\n';   
	}
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
 
// int main () 
// {
// 	int test;	cin >> test;
// 	while(test--)
// 	{
// 		int n, k;	cin >> n >> k;
		
// 		int a[1003];
// 	    for (int i = 1; i <= k; i++)    cin >> a[i];

//         int i = k;
//         while (i > 0 && a[i] == n-k+i)	i--;
//         if (i > 0) 
//         {
//             a[i]++;
//             for (int j = i+1; j <= k; j++)	a[j] = a[i] + j - i;
//         } 
//         else
//             for (int j = i+1; j <= k; j++)	a[j] = j;

//         for(int i = 1; i <= k; i++)     cout << a[i] << ' ';
//         cout << '\n';
// 	}
// 	return 0;
// }