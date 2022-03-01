#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<vector<int> > ans;

void input () 
{
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++)		cin >> a[i];
}

void Sort () 
{
	for (int i = 0; i < n - 1; i++) 
	{
		int min = i+1;
        for (int j = i + 1; j < n; j++)
            if (a[min] > a[j])		min = j;
		if (a[i] > a[min])		swap(a[i], a[min]);
		ans.push_back(a);
	}
	
    for (int i = ans.size() - 1; i >= 0; i--) 
	{
        cout << "Buoc " << i + 1 << ":";
        for (auto j : ans[i])   cout << ' ' << j;
        cout << '\n';
    }
	a.clear();
    ans.clear();
}
int main () 
{
    input ();
	Sort();
    return 0;
}