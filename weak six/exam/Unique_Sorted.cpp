#include <bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        set<int, greater<int>> s;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
