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
void insert_tail_1(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int size1(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_tail_2(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head != NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
int size2(node *head)
{
    node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}


int main()
{
    node *head1 = NULL;
    node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail_1(head1, tail1, val);
    }

     size1(head1);

    node *head2 = NULL;
    node *tail2 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail_1(head2, tail2, val1);
    }
    size2(head2);

   
        
    return 0;
}