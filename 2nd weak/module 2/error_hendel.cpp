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

void insert_at_tail(node *&head, int v)

{
    node *newnode = new node(v);
    node *tmp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void insert_at_position(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invaild index please try again"<<endl;
            cout<<endl;
            return;
        }
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
void insert_at_head(node *&head, int v)
{
    node *newnode = new node(v);
    newnode->next = head;
    head = newnode;
}
void delete_a_position(node *head,int pos)
{
   node * tmp = head;
    for(int i=1;i<pos-1;i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invaild index please try again"<<endl;
            cout<<endl;
            return;
        }
    }
    if(tmp->next == NULL)
        {
            cout<<"Invaild index please try again"<<endl;
            cout<<endl;
            return;
        }
    node * deletenode = tmp->next;
    tmp->next = tmp->next->next;
    delete deletenode;
}
void delete_a_head(node * &head)
{
    if(head == NULL)
        {
            cout<<"head it is not ablevile"<<endl;
            cout<<endl;
            return;
        }
    node * deletenode = head;
    head = head->next;
    delete deletenode;
}
void print_linked_list(node *head)
{
    node *tmp = head;
    cout << "Enter You Linked list " << endl;
    while (tmp != NULL)
    {

        cout << tmp->val << " " << endl;
        tmp = tmp->next;
    }
}

int main()
{

    node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at tail" << endl; //done 
        cout << "Option 2: print a linked list" << endl; //done
        cout << "Option 3: insert a position" << endl; // done
        cout << "Option 4: insert a head" << endl; // done
        cout << "Option 5: delelte a from a postion" << endl;//done
        cout << "Option 6: delelte a from a head" << endl;//done
        cout << "Option 7: tarminate" << endl;//done
        int op;
        cin >> op;

        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int pos, val;
            cin >> pos >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if(op == 5)
        {
            int pos;
            cin>>pos;
           if(pos == 0)
           {
            delete_a_head(head);
           }
           else
           {
             delete_a_position(head,pos);
           }
        }
        else if(op == 6 )
        {
            delete_a_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
} 