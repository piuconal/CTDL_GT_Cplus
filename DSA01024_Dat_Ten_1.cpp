#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;   cin >> n >> k;
    cin.ignore();
    string s, token, a[100], b[100];
    getline(cin, s);

    stringstream ss(s);
    int count = 0;
    while(ss >> token)      a[count++] = token;
    sort(a, a + count);
    for(int i = 0; i < count - 1; i++)
        for(int j = i + 1; j < count; j++)  
            if(a[i] == a[j])    a[j] = "-1";

    int cnt = 0;
    for(int i = 0; i < count; i++)
            if(a[i] != "-1")    b[cnt++] = a[i];

    string p(k, 1);
    p.resize(cnt, 0);
    do
    {
        for(int i = 0; i < cnt; i++)
            if(p[i])    cout << b[i] << ' ';
        cout << '\n';
    } while (prev_permutation(p.begin(), p.end()));
    
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;   cin >> n >> k;
//     cin.ignore();
//     vector <string> a(n);
//     for(auto &i : a)    cin >> i; 
//     sort(a.begin(), a.end());

//     a.resize(distance(a.begin(), unique(a.begin(), a.end())));
    
//     string s(k, 1);
//     s.resize(a.size(), 0);
//     do
//     {
//         for(int i = 0; i < a.size(); i++)
//             if(s[i])    cout << a[i] << ' ';
//         cout << '\n';
//     } while (prev_permutation(s.begin(), s.end()));
//     return 0;
// }