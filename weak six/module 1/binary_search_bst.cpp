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
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;
        if (l == -1)
            myleft = NULL;
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

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
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

bool find_search(Node *&root, int x)
{
    if (root == NULL)
    
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return find_search(root->left, x);
    }
    else
    {
        return find_search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    if (find_search(root, x))
    {
        cout << "Yes , Found " << endl;
    }
    else
    {
        cout << "No , Not Found" << endl;
    }
    return 0;
}
// 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1  -1 -1 -1 -1 

