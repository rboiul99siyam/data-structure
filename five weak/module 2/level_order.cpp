// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *left;
//     node *right;
//     node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// void level_order(node *root)
// {
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         node *f = q.front();
//         q.pop();

//         cout << f->val << " ";

//         if (f->left != NULL)
//             q.push(f->left);

//         if (f->right != NULL)
//             q.push(f->right);
//     }
// }
// int main()
// {
//     node *root = new node(10);
//     node *a = new node(20);
//     node *b = new node(30);
//     node *c = new node(40);
//     node *d = new node(50);
//     node *e = new node(60);
//     node *f = new node(70);
//     node *g = new node(80);
//     node *h = new node(90);
//     node *i = new node(100);

//     // cenction ekhane node gulo

//     root->left = a;
//     root->right = b;
//     a->left = c;
//     a->right = h;
//     c->right = e;
//     b->right = d;
//     d->left = f;
//     d->right = g;
//     h->right = i;

//     level_order(root);

//     return 0;
// }

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
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1 .
        Node *p = q.front();
        q.pop();

        // 2 .
        cout << p->val << " ";

        // 3 .
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
}
int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // cenction ekhane node gulo

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;

    level_order(root);

    return 0;
}
