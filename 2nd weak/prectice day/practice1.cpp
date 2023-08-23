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
void insert_tail(node * &head,node * &tail,int v)
{
    node * newnode = new node (v);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
int getSize (node * head)
{
    node * tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    // eibabe count korle hobe 
    // cout<<cnt;
    return cnt;
}
void printLink (node * head)
{
    node * tmp = head;
    while(tmp != NULL)
    {
     
        tmp =  tmp->next;
    }
       cout<<"Count value Result: "<<getSize(head)<<endl; // eivabe count korle hobe 
}
int main()
{   
    cout<<"Give You New node "<<endl;
    node * head = NULL;
    node * tail = NULL;
    int v;
    while(true)
    {
        cin>>v;
        if( v == -1)
        break;
        insert_tail(head,tail,v);
    }
    printLink(head);
    getSize(head);
    return 0;
}