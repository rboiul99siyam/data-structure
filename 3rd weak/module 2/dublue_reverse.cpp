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
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
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
void reverse(node *head, node *tail)
{
    node *i = head;
    node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int v;
    cout<<"Enter Your valid intiger"<<endl;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }
    reverse(head, tail);
    print(head);

    return 0;
}
