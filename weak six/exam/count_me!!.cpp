#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int ar[n];
        map<int, int> mp;

        int mx_v = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second >= ans)
            {
                mx_v = it->first;
                ans = it->second;
            }
        }
        cout << mx_v << " " << ans << " " << endl;
    }
    return 0;
}
