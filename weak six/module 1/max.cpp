#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < mn)
        {
            mn = ar[i];
        }
    }
    cout << mn << " ";

    return 0;
}