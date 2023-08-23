#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> l;
    cout << "Enter Your size : " << endl;
    int n;
    cin >> n;
    cout << "Enter Your element : " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push(x);
    }
    while (!l.empty())
    {
        cout << l.front() << endl;
        l.pop();
    }
    return 0;
}