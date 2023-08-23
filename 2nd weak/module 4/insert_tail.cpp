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
void insert_tail(node * &head,int v)
{
    node * newnode = new node(v);
    node * tmp = head;
    if(head == NULL)
    {
        head = newnode;
        return;
    }

    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;

}
void pirntLink(node * head)
{
    node * tmp = head;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
int main()
{   
    node * head = new node(10);
    node * a  = new node(20);
    
    head->next = a;
    insert_tail(head,100);  
    pirntLink(head);

    return 0;
}