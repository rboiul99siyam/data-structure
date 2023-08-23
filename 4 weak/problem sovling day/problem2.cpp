#include <bits/stdc++.h>
using namespace std;
bool sameTosame(stack<int> &st, queue<int> &q)
{
    if (st.size() != q.size())
        return false;
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            return false;
            st.pop();
            q.pop();
        }
    } 
    return true;
}
int main()
{
    int n, m;
    stack<int> st;
    queue<int> q;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (sameTosame(st, q))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
