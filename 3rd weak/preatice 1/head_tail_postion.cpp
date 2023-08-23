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
    // node * tmp =head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
// insert_position
void insert_position(node *&head, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tmp;
}
void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_head(node *&head, node *&tail, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->next = newnode;
    tmp->prev = newnode;
    head = newnode;
}
int getSize(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    int v1;
    while (true)
    {
        cin >> v1;
        if (v1 == -1)
            break;
        insert_tail(head, tail, v1);
    }
    int pos,v;
    cin>>pos>>v;
    // insert_position(head,pos,v);
    insert_head(head, tail,pos, v);
    print_list(head);
    return 0;
}