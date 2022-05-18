#include<bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	vector<int> ans;
	while (cin >> S)
	{
		if (S == "show")
		{
			if (!ans.size())    cout << "empty\n";
			else
			{
				for (auto i : ans)  cout << i << " ";
				cout << '\n';
			}
		}

		else if (S == "push")
		{
			int res;    cin >> res;
			ans.push_back(res);
		}
		else if (S == "pop")
			ans.pop_back();
	}
	return 0;
}