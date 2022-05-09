#include<bits/stdc++.h>
using namespace std;
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)

int main()
{
	int test;	cin >> test;
	while(test--)
	{
		int n, x;
        cin >> n;
        long long ans = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            q.push(x);
        }
        while (q.size() > 1)
        {
            int s1 = q.top();	q.pop();
            int s2 = q.top();	q.pop();
            q.push(s1 + s2);
            ans += s1 + s2;
        }
        cout << ans << endl;
	}
	return 0;
}