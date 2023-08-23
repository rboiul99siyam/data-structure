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

    int val;
    node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_linked_list(head);
    return 0;
}