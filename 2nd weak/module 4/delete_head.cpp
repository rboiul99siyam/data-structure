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
// ami size delete korchi 
void delete_node(node * head,int pos)
{
    node * tmp = head;
    for(int i=1;i<pos-1;i++)
    {
        tmp = tmp->next;
    }

    node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

// print kora jonno ami use korch
void printLink(node * head)
{
    node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl; 
}
// get size
int getSize(node * head)
{
    node * tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
// delete head;
void delete_head(node * &head)
{
    node * deleteHead = head;
    head = head->next;
    delete deleteHead;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
     
    printLink(head);
    int pos;
    cin>>pos;
   if(pos>getSize(head))
   {
     cout<<"Invlid index"<<endl;
   }
   else if(pos==0)
   {
     delete_head(head);
   }
   else{
    delete_node(head,pos);
   }
    printLink(head);




    return 0;
}