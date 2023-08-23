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
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }
        p->left = myleft;
        p->right = myright;

        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}
// int leaf_Node(Node *root)
// {
//     if (root == NULL)
//     {
//         return INT_MIN;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         return root->val;
//     }
//     int l = leaf_Node(root->left);
//     int r = leaf_Node(root->right);

//     return max(root->val, max(l, r));
// }
void leaf_Node_One(Node *root, int &mx)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        if (root->val > mx)
        {
            mx = root->val;
        }
    }
    else
    {
        leaf_Node_One(root->left, mx);
        leaf_Node_One(root->right, mx);
    }
}
void leaf_Node_two(Node *root, int &mn)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        if (root->val < mn)
        {
            mn = root->val;
        }
    }
    else
    {
        leaf_Node_two(root->left, mn);
        leaf_Node_two(root->right, mn);
    }
}
int main()
{

    Node *root = input_tree();
    int mmx = INT_MIN;
    leaf_Node_One(root, mmx);
    cout << mmx << " ";
    int mmn = INT_MAX;
    leaf_Node_two(root, mmn);
    cout << mmn << endl;
    return 0;
}
