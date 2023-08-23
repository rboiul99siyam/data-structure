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
    }
    tail->next = newnode;
    tail = newnode;
}
void inset_postion(node *head, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
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
void print_linked(node *head)
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
    // node *head = new node(10);
    // node *tail = new node(20);
    // node *a = new node(30);
    // node *b = new node(40);

    // head->next = tail;
    // tail->next = a;
    // a->next = b;
    node *head = NULL;
    node *tail = NULL;

    int v1;
    cin >> v1;
    for (int i = 0; i < v1; i++)
    {
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        print_linked(head);
        int pos, v;
        cin >> pos >> v;
        if (pos > getSize(head))
        {
            cout << "Invlid index" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, v);
        }
        else
        {
            inset_postion(head, pos, v);
        }
        print_linked(head);
    }

    return 0;
}