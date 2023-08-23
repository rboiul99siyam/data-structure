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

// inserrt_at_tail
void insert_tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);

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
// print at list
void print_list(node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
// insert_head
void insert_head(node *&head, node *&tail, int pos, int v)
{
    node *newnode = new node(v);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    tmp->prev = newnode;
    head = newnode;
}
// insert_postion
void insert_postion(node *&head, int pos, int v)
{
    node *newnode = new node(v);
    node *tamp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tamp = tamp->next;
    }
    newnode->next = tamp->next;
    tamp->next = newnode;
    newnode->next->prev = newnode;
    newnode->prev = tamp;
}
// size
int getsize(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void deleteFromHead(node * &head)
{
    node * deletNode = head;
    head = head->next;
    delete deletNode;
    head->prev = NULL;
}
void deleteFromTail(node * &tail)
{
    node * deleteNOde = tail;
    tail = tail->prev;
    delete deleteNOde;
    tail->next = NULL;
}
void deletePosition(node * &head,int pos)
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
int main()
{

    node *head = NULL;
    node *tail = NULL;

    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        insert_tail(head, tail, v);
    }
    int pos,v1;
    cin>>pos>>v1;
    if(pos>=getsize(head))
    {
        cout<<"Invalid";
    }
    else if(pos==0)
    {
        insert_head(head,tail,pos,v);
    }
    else if(pos==getsize(head)-1)
    {
        deleteFromTail(tail);
    }
    else
    {
        deletePosition(head,pos);
    }
    print_list(head);
    return 0;
}