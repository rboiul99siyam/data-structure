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
    tail = newnode;
}
void insert_head(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void printLink(node *head, node *tail)
{
    if (head != NULL)
    {
        cout << head->val << " " << tail->val;
    }
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_head(head, tail, val);
        }
        else if (pos == 1)
        {
            insert_tail(head, tail, val);
        }
        printLink(head,tail);
    }
    return 0;
}