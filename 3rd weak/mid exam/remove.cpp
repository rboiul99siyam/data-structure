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
    tail = newnode;
}
void *print(node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void * deblicate(node * head)
{
    
    node * tmp = head;
    while(tmp->next!=NULL)
    {
       while(tmp->next!=NULL && tmp->val == tmp->next->val)
       {
        tmp->next = tmp->next->next;
       }
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
        insert_tail(head, tail, val);
    }
    for (node *i = head; i->next != NULL; i = i->next)
    {
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
               swap(i->val,j->val);
            }
        }
    }
    deblicate(head);
    print(head);
    return 0;
}