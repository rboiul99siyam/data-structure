#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    string s;
    node *prev;
    node *next;

    node(string s)
    {
        this->s = s;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail(node *&head, node *&tail, string s)
{
    node *newnode = new node(s);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
node *pos_fun(node *head, string add)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->s == add)
        {
            cout << temp->s << endl;
            return temp;
        }

        temp = temp->next;
    }

    return temp;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;

    string s;
    while (true)
    {
        cin >> s;
        if (s == "end")
        {
            break;
        }
        insert_tail(head, tail, s);
    }

    node *position = NULL;

    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        string comm;
        cin >> comm;
        if (comm == "visit")
        {
            string add;
            cin >> add;

            node *pos = pos_fun(head, add);
            if (pos != NULL)
            {
                position = pos;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (comm == "next")
        {
            if (position != NULL && position->next != NULL)
            {
                cout << position->next->s << endl;
                position = position->next;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (comm == "prev")
        {
            if (position != NULL && position->prev != NULL)
            {
                cout << position->prev->s << endl;
                position = position->prev;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
