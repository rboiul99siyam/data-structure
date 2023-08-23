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
void insert_Tail(node *&head, node *&tail, int v)
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
void print_recartion(node *head)
{
    node *tmp = head;
    if (head == NULL)
        return;
    print_recartion(tmp->next);
    cout << tmp->val << " ";
}
void print(node *head)
{
    node *tmp = head;
    cout<<endl;
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

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_Tail(head, tail, val);
    }
    print_recartion(head);
    print(head);
    return 0;
}