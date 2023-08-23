
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
//     // tmp er last link e
//     tmp->next = newnode;
// }
// void print_linked_list(node *head)
// {
//     node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << endl;
//         tmp = tmp->next;
//     }
// }
// int main()
// {

//     node *head = NULL;
//     while (true)
//     {
//         cout << "Option 1 : insert at tail" << endl;
//         cout << "Option 2 : print a linked list" << endl;
//         cout << "Option 3 : tarmate" << endl;
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
}
void print_a_position(node *head)
{
    node *tmp = head;
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
        cout << "Option 1 : insert at tail" << endl;
        cout << "Option 2 : print a linked list" << endl;
        cout << "Option 3: Program closed" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
            cout << "Insert at tail" << endl
                 << endl;
        }
        else if (op == 2)
        {
            print_a_position(head);
        }
        else if (op == 3)
        {
            break;
        }
    }
    return 0;
}