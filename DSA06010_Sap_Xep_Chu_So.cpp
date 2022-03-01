#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int x;	cin >> x;
		cin.ignore();
		string s;	getline(cin, s);
		int n = s.size();
		
		for(int i = 0; i <= n - 2; i++)
			for(int j = i+1; j <= n - 1; j++)
			{
				if(s[i] > s[j])	swap(s[i], s[j]);
				else if(s[i] == s[j])	s[j] = 'a';
			}
		
		for(int i = 0; i <= n - 1; i++)
			if(s[i] != 'a' && s[i] != ' ')	cout << s[i] << ' ';
		cout << '\n';
	}
	return 0;
}