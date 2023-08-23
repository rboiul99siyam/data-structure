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
void printLinK(node *head)
{
    node *tmp = head;
    cout << "Print a linked list:" << endl;
    while (tmp != NULL)
    {
        cout << tmp->val << " " << endl;
        tmp = tmp->next;
    }
}
int main()
{
    node * head = NULL;
    node * tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        inset_tail(head,tail,val);
    }
    printLinK(head);

    return 0;
}