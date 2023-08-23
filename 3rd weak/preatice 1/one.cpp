#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *prev;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
bool someTosame(node *head1, node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    return (head1==NULL && head2==NULL);
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }

    node *head1 = NULL;
    node *tail1 = NULL;
    int v1;
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
            break;
        insert_tail(head1, tail1, v1);
    }
    bool same = someTosame(head, head1);
    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}