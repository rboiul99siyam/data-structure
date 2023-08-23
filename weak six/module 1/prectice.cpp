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
        root = nullptr;
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
            myleft = nullptr;
        }
        else
        {
            myleft = new Node(l);
        }

        if (r == -1)
        {
            myright = nullptr;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void preoder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    preoder(root->left);
    preoder(root->right);
}

// binary search tree

bool find_search(Node *root, int x)
{
    // base case

    if (root == nullptr)
    {
        return false;
    }
    if (root->val == x)
    {
        return true;
    }

    if (x < root->val)
    {
        return find_search(root->left, x);
    }
    else
    {
        find_search(root->right, x);
    }
}

void insert(Node *&root, int x)
{
    if (root == nullptr)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == nullptr)
        {
            root = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if(root->right == nullptr)
        {
            root = new Node (x);
        }
        else
        {
            insert(root->right,x);
        }
    }
}

int main()
{
    Node *root = input_tree();

    // cout << "Enter Your Binary Value Now : " << endl;
    // int x;
    // cin >> x;
    // if (find_search(root, x))
    // {
    //     cout << "Yes , Found " << endl;
    // }
    // else
    // {
    //     cout << " No , No Found " << endl;
    // }
    insert(root,19);
    preoder(root);

    return 0;
}

