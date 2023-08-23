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

void levelNode(Node *root, int val)
{
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        q.pop();
        Node *p = pr.first;
        int level = pr.second;

        if (level == val)
        {
            cout << p->val << " ";
        }
        else if (val < 0)
        {
            cout << "Invalid"<< " ";
        }

        if (p->left != NULL)
            q.push({p->left, level + 1});
        if (p->right != NULL)
        {
            q.push({p->right, level + 1});
        }
    }
}
int main()
{
    Node *root = input_tree();
    int test;
    cin >> test;
    levelNode(root, test);
    return 0;
}