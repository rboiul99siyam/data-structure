// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *next;
//     node *prev;
//     node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->next = NULL;
//     }
// };
// void insert_tail(node *&head, node *&tail, int v)
// {
//     node *newnode = new node(v);
//     if (head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }
// void insert_Position(node *&head, int pos, int val)
// {
//     node *newnode = new node(val);
//     node *tmp = head;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         tmp = tmp->next;
//     }
//     newnode->next = tmp->next;
//     tmp->next = newnode;
//     newnode->next->prev = newnode;
//     newnode->prev = tmp;
// }
// void print_normal(node *head)
// {
//     node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }
// void print_reverse(node *tail)
// {
//     node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }
// int size(node *head)
// {
//     node *tmp = head;
//     int cnt = 0;
//     while (tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
// int main()
// {
//     node *head = NULL;
//     node *tail = NULL;

//     int val;
//     while (true)
//     {
//         cin >> val;
//         if (val == -1)
//             break;
//         insert_tail(head, tail, val);
//     }

//     cout << "Enter Your position Number:" << endl;
//     int pos, v;
//     cin >> pos >> v;
//     // if (pos >= size(head))
//     // {
//     //     cout << "Invild index" << endl;
//     // }
//     // else
//     // {
//     //     insert_Position(head, pos, val);
//     // }
//     insert_Position(head,pos,v);
//     print_normal(head);
//     print_reverse(tail);
//     return 0;
// }
