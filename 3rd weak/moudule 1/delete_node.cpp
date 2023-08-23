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
        this->next = NULL;
    }
};
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
void delet_position(node *&head, int pos)
{
    node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    node *deletNode = tmp->next;
    tmp->next = tmp->next->next;

    tmp->next->prev = tmp;
    delete deletNode;
}
void delete_tail(node *&tail)
{

    node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void delete_head(node *&head)
{
    node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}
int main()
{

    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;

    head->next = a;
    a->prev = head;
    a->next = b; 
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid" << endl;
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
        delet_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);
    return 0;
}