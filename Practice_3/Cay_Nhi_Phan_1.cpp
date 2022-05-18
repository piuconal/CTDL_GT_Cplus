#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define FOR(i, l, r)    for(int i = l; i <= r; i++)
#define FOD(i, r, l)    for(int i = r; i >= l; i--)
#define sz(s)   s.size()
#define Fast_Piu    ios_base::sync_with_stdio(false);       cin.tie(0);

struct Node
{
    int val;
    Node *left, *right;
};

typedef Node* bintree;

inline bintree createNode(int x)
{
    bintree res = new Node;
    res -> val = x;
    res -> left = res -> right = NULL;
    return res;
}

inline void buildtree(bintree &A, char c, int par, int child)
{
    if(A != NULL)
    {
        if(A -> val == par)
        {
            if(c == 'L')    A -> left = createNode(child);
            else            A -> right = createNode(child);
        }
        buildtree(A->left, c, par, child);
        buildtree(A->right, c, par, child);
    }
}

inline void levelorder(bintree root)
{
    queue<bintree> q;
    bintree top;
    q.push(root);
    while(q.size())
    {
        top = q.front();
        q.pop();
        cout << top->val << ' ';
        if(top->left != NULL)   q.push(top->left);
        if(top->right != NULL)   q.push(top->right);
    }
}
int main()
{
    Fast_Piu;
    int t;  cin >> t;
    while(t--)
    {
        int n;  cin >> n;
        bintree root = NULL;
        int par, child;
        char c;
        cin >> par >> child >> c;
        root = createNode(par);
        buildtree(root, c, par, child);
        n--;
        while(n--)
        {
            cin >> par >> child >> c;
            buildtree(root, c, par, child);
        }
        levelorder(root);
        cout << '\n';
    }
    return 0;
}