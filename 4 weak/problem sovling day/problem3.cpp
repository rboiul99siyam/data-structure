#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n; // n size
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x; // ei amar element
        st.push(x);
    }

    stack<int> newQ;
    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        if (st.empty())
        {
            newQ.push(k);
            break;
        }
        newQ.push(k);
    }
    st = newQ;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
