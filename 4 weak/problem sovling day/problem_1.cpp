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
// class myQueue
// {
// public:
//     node *head = NULL;
//     node *tail = NULL;
//     int sz = 0;
//     void push(int val)
//     {
//         sz++;
//         node *newnode = new node(val);
//         if (head == NULL)
//         {
//             head = newnode;
//             tail = newnode;
//             return;
//         }
//         tail->next = newnode;
//         tail = newnode;
//     }
//     void pop()
//     {
//         sz--;
//         node *deleteNode = head;
//         head = head->next;
//         delete deleteNode;
//         if (head == NULL)
//         {
//             tail = NULL;
//         }
//     }
//     int front()
//     {
//         return head->val;
//     }
//     int size()
//     {
//         return sz;
//     }
//     bool empty()
//     {
//         if (sz == 0)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };
// bool same_to_same(myQueue &q1, myQueue &q2)
// {
//     if (q1.size() != q2.size())
//         return false;
//     while (!q1.empty() && !q2.empty())
//     {
//         if (q1.front() != q2.front())
//         {
//             return false;
//             q1.pop();
//             q2.pop();
//         }
//     }
//     return true;
// }
// int main()
// {

//     myQueue q1, q2;
//     int n, m;

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         q1.push(x);
//     }
//     cin >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int y;
//         cin >> y;
//         q2.push(y);
//     }
//     if (same_to_same(q1, q2))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
#include <iostream>
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

class myQueue
{
public:
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
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

    void pop()
    {
        sz--;
        node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
            return true;
        else
            false;
    }
};

bool same_to_same(myQueue &q1, myQueue &q2)
{
    if (q1.size() != q2.size())
        return false;

    while (!q1.empty() && !q2.empty())
    {
        if (q1.front() != q2.front())
        {
            return false;
        }
        q1.pop();
        q2.pop();
    }

    return true;
}

int main()
{
    myQueue q1, q2;
    int n, m;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        q2.push(y);
    }

    if (same_to_same(q1, q2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return true;
    return 0;
}
