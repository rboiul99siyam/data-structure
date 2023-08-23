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
void inset_tail(node *&head, node *&tail, int v)
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

void print_linked(node *head)
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
    while (true)
    {
        cin >> v;
        if (v == -1) break;
        {
            inset_tail(head, tail, v);
        }
    }
    int flag = 0;
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
   
    print_linked(head);
    return 0;
}