#include<bits/stdc++.h>
using namespace std;

int min_refills(int dist, int tank, vector<int> stops) 
{
    int numR = 0, currR = 0, lastR, n = stops.size();
    n = n - 2;
    while (currR <= n) 
    {
         lastR = currR;
         while(currR <= n && stops[currR + 1] - stops[lastR] <= tank)   currR += 1;
         if(currR == lastR)     return -1;
         if(currR <= n)         numR += 1;
    }
    return numR;
}
int main() 
{
    int d;  cin >> d;
    int t;  cin >> t;
    int n;  cin >> n;
    vector<int> stops(n+2);
    stops.push_back(0);
    for (int i = 1; i < n+1; i++)   cin >> stops.at(i);
    stops.insert(stops.begin() + n + 1, d);
    cout << min_refills(d, t, stops);
    return 0;
}