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
    node *tmp = head;
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
void print_normal(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void delete_head(node *&head)
{
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
void delete_tail(node *&tail)
{
    node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void delete_postion(node * &head,int pos)
{
    node * tmp = head;
    for(int i=0;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
int size(node *head)
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
    cout << "Enter Your value now :" << endl;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int pos;
    cin >> pos;
    if (pos == size(head))
    {
        cout << "Invalid " << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_postion(head,pos);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}