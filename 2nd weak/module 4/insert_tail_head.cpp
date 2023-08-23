#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(node *head)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
// insert a position
void insert_positon(node *head, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
    // pos = 1;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void insert_head(node *&head, int v)
{
    node *newnode = new node(v);
    newnode->next = head;
    head = newnode;
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    int pos, val;
    cin >> pos >> val;

    print(head);
    if (pos > size(head))
    {
        cout << "invlid index" << endl;
    }
    else if (pos == 0)
    {
        insert_head(head, val);
    }
    else
    {
        insert_positon(head, pos, val);
    }

    print(head);

    //  size(head);

    return 0;
}