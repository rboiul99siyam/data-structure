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
// Node *convert(int ar[], int n, int l, int r)
// {

//     if (l > r)
//     {
//         return nullptr;
//     }
//     int mid = (l + r) / 2;

//     Node *root = new Node(ar[mid]);

//     Node *leftroot = convert(ar, n, l, mid - 1);
//     Node *rightroot = convert(ar, n, mid + 1, r);

//     return root;
// }

Node *convert(int ar[], int n, int l, int r)
{

    // base case
    if (l > r)
    {
        return nullptr;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);

    Node *leftroot = convert(ar, n, l, mid - 1);
    Node *rightroot = convert(ar, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;

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
    cout << "Enter Your array size : " << endl;
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    Node *root = convert(ar, n, 0, n - 1);
    level_order(root);
    return 0;
}