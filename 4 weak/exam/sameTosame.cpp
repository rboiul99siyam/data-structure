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

class myStack
{
    vector<int> v;
    int sz = 0;

public:
    void push(int val)
    {
        sz++;
        v.push_back(val);
    }

    int pop()
    {
        sz--;
        int Delete = v.back();
        v.pop_back();
        return Delete;
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
            return false;
    }
};

class myQueue
{
    node *head = NULL;
    node *tail = NULL;
    int sz = 0;

public:
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
        node *deletenode = head;
        head = head->next;
        delete deletenode;
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
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st;
    myQueue qu;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    bool stqu = true;
    while (!st.empty() && !qu.empty())
    {
        if (st.pop() != qu.front())
        {
            stqu = false;
            break;
        }
        
    }
    if (stqu == true)
    {
        cout << "YES" << endl;
    }
    else if(n!=m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
