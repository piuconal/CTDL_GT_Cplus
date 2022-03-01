#include <bits/stdc++.h>
using namespace std;

int solve1(string s)
{
    if(s[0] == '8' && s[s.size() - 1] == '6')	return 1;
    return 0;
}

int solve2(string s)
{
	int n = s.size();
	for(int i = 0; i < n - 1; i++)
		if(s[i] == '8' && s[i] == s[i + 1])	return 0;
	return 1;
}

int solve3(string s)
{
	int n = s.size();
	for(int i = 0; i < n - 3; i++)
		if(s[i] == '6' && s[i] == s[i + 1] 
		&& s[i + 1] == s[i + 2] && s[i + 2] == s[i + 3])	return 0;
	return 1;
}

int main()
{
    int n;	cin >> n;
    string a;
    for (int i = 0; i <= n - 1; i++)		a += '6';
    while(1)
    {
        if (solve1(a) && solve2(a) && solve3(a))
        {
            for (int i = 0; i <= a.size() - 1; i++)		cout << a[i];
            cout << '\n';
        }
        int ok = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '6')
            {
                ok = 1;
                a[i] = '8';
                for(int j = i + 1; j <= n - 1; j++)		a[j] = '6';
                break;
            }
        }
        if (ok == 0)
        break;
    }
}