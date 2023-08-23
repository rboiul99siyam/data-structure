// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);

//         int cur_idx = v.size() - 1;
//         // cout << cur_idx << endl;
//         while (cur_idx != 0)
//         {
//             int pr_inx = (cur_idx - 1) / 2;

//             if (v[pr_inx] < v[cur_idx])
//             {
//                 swap(v[pr_inx], v[cur_idx]);
//             }
//             else
//                 break;
//             cur_idx = pr_inx;
//         }
//     }

//     for (int val : v)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);

//         int cur_idx = v.size() - 1;

//         while (cur_idx != 0)
//         {
//             int pr_idx = (cur_idx - 1) / 2;
//             if (v[pr_idx] < v[cur_idx])
//             {
//                 swap(v[pr_idx], v[cur_idx]);
//             }
//             else
//                 break;
//             pr_idx = cur_idx;
//         }
//     }

//     for(int val : v)
//     {
//         cout<<val<<" ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // global value
    // int array size

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);

        int cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            int pr_idx = (cur_idx - 1) / 2;
            if (v[pr_idx] > v[cur_idx])
            {
                swap(v[cur_idx], v[pr_idx]);
            }
            else
                break;
            pr_idx = cur_idx;
        }
    }

    for (int val : v)
    {
        cout << val << endl;
    }
    return 0;
}