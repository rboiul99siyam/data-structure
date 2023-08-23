#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> p;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int n;
            cin >> n;
            p.push(n);
        }
        else if (x == 1)
        {
            if (!p.empty())
            {
                cout << p.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (x == 2)
        {
            if (!p.empty())
            {
                p.pop();
                if (!p.empty())
                {
                    cout << p.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}