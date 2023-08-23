#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *convert(int ar[], int n, int l, int r)
{
    // base case
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *rootleft = convert(ar, n, l, mid - 1);
    Node *rootright = convert(ar, n, mid + 1, r);

    root->left = rootleft;
    root->right = rootright;

    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << " ";

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{
    cout << "Enter Your size " << endl;
    int n;
    cin >> n;
    cout << " Enter Your Array element : " << endl;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    Node *root = convert(ar, n, 0, n - 1);
    level_order(root);

    return 0;
}

// 2,3 8 ,12 ,15,18;