#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> qu;
    int n, m;
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
        qu.push(x);
    }
    bool stqu = true;
    while (!st.empty() && !qu.empty())
    {
        if (st.pop() != qu.pop())
        {
            stqu = false;
        }
    }
    if (stqu == true)
    {
        cout << "YES" << endl;
    }
    else if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}