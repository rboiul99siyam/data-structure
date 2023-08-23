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
// void print_recartion(node *n)
// {
//     // base case
//     if (n == NULL)
//         return;
//     print_recartion(n->next);
//     cout << n->val << endl;
//     // print_recartion(n->next); // reverse
// }
void print(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " " << endl;
        tmp = tmp->next;
    }
}
void reverse(node *&head, node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    node *head = new node(10);
    node * a = new node(20);
    node * b = new node (30);
    head->next = a;
    a->next = b;
   
    reverse(head, head);
    print(head);

    return 0;
}