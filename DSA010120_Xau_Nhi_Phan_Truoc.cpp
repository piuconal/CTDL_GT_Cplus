#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;	cin >> s;
	int i = s.size() - 1;
	while(s[i] == '0' && i >= 0)		i -= 1;
	if(i < 0)
	{
		for(int i = 0; i < s.size(); i++)	cout << '1';
	}
	else
	{
		s[i] = '0';
		for(int j = i + 1; j < s.size(); j++)	s[j] = '1';
		cout << s;
	}
}
int main()
{
    int t;	cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << '\n';
    }
}