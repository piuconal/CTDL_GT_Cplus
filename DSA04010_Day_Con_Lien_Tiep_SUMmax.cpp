#include<bits/stdc++.h>
using namespace std;

int maxSumSubArray(int A[], int n) 
{
    int local_max = 0;
    int global_max = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
         local_max = max(A[i], A[i] + local_max);
         global_max = max(global_max, local_max);
    }
    return global_max;
}
int main() 
{
    int test;   cin >> test;
    while(test--)
    {
        int n;  cin >> n;
        int a[111];
        for(int i = 0; i < n; i++)  cin >> a[i];
        cout << maxSumSubArray(a, n);
        cout << '\n';
    }
}