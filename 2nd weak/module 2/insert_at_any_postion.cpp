// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *next;
//     node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void insert_at_tail(node *&head, int v)

// {
//     node *newnode = new node(v);
//     node *tmp = head;
//     if (head == NULL)
//     {
//         head = newnode;
//         return;
//     }
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newnode;
// }
// void insert_at_position(node *head, int pos, int val)
// {
//     node *newnode = new node(val);
//     node *tmp = head;
//     for (int i = 1; i < pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     newnode->next = tmp->next;
//     tmp->next = newnode;
// }
// void print_linked_list(node *head)
// {
//     node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " " << endl;
//         tmp = tmp->next;
//     }
// }
// int main()
// {

//     node *head = NULL;
//     while (true)
//     {
//         cout << "Option 1: insert at tail" << endl;
//         cout << "Option 2: print a linked list" << endl;
//         cout << "Option 3: insert a position" << endl;
//         cout << "Option 4: tarminate" << endl;
//         int op;
//         cin >> op;

//         if (op == 1)
//         {
//             int v;
//             cin >> v;
//             insert_at_tail(head, v);
//         }
//         else if (op == 2)
//         {
//             print_linked_list(head);
//         }
//         else if (op == 3)
//         {
//             int pos, val;
//             cin >> pos >> val;
//             insert_at_position(head, pos, val);
//         }
//         else if (op == 4)
//         {
//             break;
//         }
//     }
//     return 0;
// }

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
    cout << "insert_at_tail" << endl
         << endl;
}
void insert_at_any_postion(node * head ,int pos ,int v)
{
  node * newnode = new node(v);
  node * tmp = head;
  for(int i=1;i<pos-1;i++)
  {
    tmp = tmp->next;
  }
  newnode->next =  tmp->next;
  tmp->next = newnode;

}
void print_a_linked_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert a tail" << endl;
        cout << "Option 2 : print a linked list" << endl;
        cout << "Option 3:insert a position" << endl;
        cout << "Option 4: program closed" << endl;
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
            print_a_linked_list(head);
        }
        else if(op == 3)
        {
            int poss,v;
            cin>>poss>>v;
            insert_at_any_postion(head,poss,v);
        }
        else if (op == 4)
        {
            break;
        }
    }
    return 0;
}