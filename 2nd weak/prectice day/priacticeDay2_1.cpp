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
void insert_tail_2(node *&head2, node *&tail2, int val2)
{
    node *newnode = new node(val2);
    if (head2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
    }
    tail2->next = newnode;
    tail2 = newnode;
}
int size2(node *head2)
{
    node *tmp = head2;
    int cnt2 = 0;
    while (tmp != NULL)
    {
        cnt2++;
        tmp = tmp->next;
    }

    return cnt2;
}

void printLink1(node *head1)
{
    node *tmp = head1;
    while (tmp != NULL)
    {
        tmp = tmp->next;
    }
    cout << endl;
}
void printLink12(node *head2)
{
    node *tmp = head2;
    while (tmp != NULL)
    {
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    node *head_1 = NULL;
    node *tail_1 = NULL;

    int val_1;
    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
            break;
        insert_tail_1(head_1, tail_1, val_1);
    }
    size1(head_1);

    node *head_2 = NULL;
    node *tail_2 = NULL;
    int val_2;
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
            break;
        insert_tail_2(head_2, tail_2, val_2);
    }
    size2(head_2);
    if (insert_tail_1(head_1, tail_1, val_1) == insert_tail_2(head_2, tail_2, val_2))
    {
        cout << "YES" << endl;
    }
    //   else if(head_1 != head_2)
    // {
    //     cout<<"NO"<<endl;
    // }
    else if (size1(head_1) == size2(head_2))
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
//  expatect Output : 1 2 3 -1
//  expatect Output : 3 2 1 -1
//  expatect Output : NO
//  expatect Output : solve koro