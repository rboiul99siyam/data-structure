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
void insert_Tail(node *&head, node *&tail, int v)
{
    node *newnode = new node(v);
    if (head == NULL)

    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
int count_langth(node *head)
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
void printLink(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        // cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void findMid(node *head)
{
    node *tmp = head;
    int size = count_langth(head);
    int mid = (size + 1) / 2;
    for (int i = 0; i < mid - 1; i++)
    {
        tmp = tmp->next;
    }
    if (size % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        cout << tmp->val << endl;
    }
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
        insert_Tail(head, tail, val);
    }
    printLink(head);
    findMid(head);

    return 0;
}