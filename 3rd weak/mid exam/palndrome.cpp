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
bool palindrome(node *head)
{
    if (head == NULL && head->next == NULL)
        return true;
    
    node *newHead = NULL;
    node *newTail = NULL;
    node *tmp = head;
    
    while (tmp != NULL)
    {
        insert_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    
    tmp = head;
    reverse(newHead, newHead);
    node *tmp2 = newHead;
    
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    
    return true;
}


void print(node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
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
    if (palindrome(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}



