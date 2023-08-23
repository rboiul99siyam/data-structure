#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    cin.ignore();
    for (int i = 0; i < q; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        map<string, int> mp;

        string st;
        int cnt = 0;
        while (ss >> s)
        {
            mp[s]++;
            if (mp[s] > cnt)
            {
                st = s;
                cnt = mp[s];
            }
        }
        cout << st << " " << cnt << " " << endl;
    }
    return 0;
}