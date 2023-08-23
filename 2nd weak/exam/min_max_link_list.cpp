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
void insert_tail(node *&head, node *&tail, int val)
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
int max(node *head)
{
    node *tmp = head;
    int max = INT_MIN;
    while (tmp != NULL)
    {
        if (tmp->val > max)
        {
            max = tmp->val;
        }
        tmp = tmp->next;
    }
    return max;
}
int min(node *head)
{
    node *tmp = head;
    int min = INT_MAX;
    while (tmp != NULL)
    {
        if (tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    return min;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int size1 = min(head);
    int size2 = max(head);
    cout << size2 << " " << size1 << endl;

    return 0;
}