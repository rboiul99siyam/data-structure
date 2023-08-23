#include<bits/stdc++.h>
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
void inset_at_tail(node *&head,node * &tail,int v)
{
    node * newnode = new node (v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode ;
}
void printLink(node *head)
{
    node * tmp = head;
    while(tmp !=NULL)
    {
        
        tmp = tmp->next;
    }
    cout<<endl;
}

int main()
{   
    node * head = NULL;
    node * tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        break;
        inset_at_tail(head,tail,val);
    }
    int cnt = 0;
    for(node * i = head; i->next != NULL;i = i->next)
    {
        for(node * j = i->next; j != NULL; j = j->next)
        {
            if(i->val == j->val)
            {
                cnt++;
            }
        }
    }
    if(cnt == 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    printLink(head);

    return 0;
}