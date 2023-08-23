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
    // frist;
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    // secound;
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myleft;
        Node *myrigt;

        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myrigt = NULL;
        else
            myrigt = new Node(r);

        p->left = myleft;
        p->right = myrigt;
        if (p->left != NULL)
            q.push(p->left);
        if (p->left != NULL)
            q.push(p->right);
    }
    return root;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

int count_leaf(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return 0;
    }
}
int main()
{
    cout << "Enter Your input Now : (binary tree children end -1 use must be :)" << endl;
    Node *root = input_tree();
    cout << "Your input Result : " << endl;
    preorder(root);
    cout << "count e leaf : " << count_leaf(root) << endl;
    return 0;
}