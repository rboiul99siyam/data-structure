// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     // vector<int> ar(n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ar[i];
//     }

//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (ar[i]==2)
//         {
//             cnt++;
//         }
//     }
//     if (cnt == 2)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] == ar[j])
            {
                cnt++;
            }
        }
    }

    if (cnt == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}