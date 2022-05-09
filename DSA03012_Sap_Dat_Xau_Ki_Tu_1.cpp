#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;	cin >> test;
	cin.ignore();
	while(test--)
	{
		string s, tmp;
		getline(cin, s);
		tmp = s;

		sort(tmp.begin(), tmp.end());
		tmp.resize(distance(tmp.begin(), unique(tmp.begin(), tmp.end())));
		
		int cnt_max = 0;
		int i = 0;
		for(int j = 0; j < tmp.size(); j++)
		{
			int cnt = 0;
			while(s[i] != '\0')
			{
				if(tmp[j] == s[i])	cnt++;
				i++;
			}
			if(cnt_max <= cnt)	cnt_max = cnt;
		}
		if(s.size() >= 2*cnt_max - 1)	cout << "1\n";
		else							cout << "-1\n"; 
	}
	return 0;
}