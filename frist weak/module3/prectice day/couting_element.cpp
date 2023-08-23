#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0;i<n;i++)
    {
        cin>>ar[i];
    }

    int cnt = 0;
    for(int i=0;i<n;i++)
    {
       auto it  = find(ar.begin(),ar.end(),ar[i]+1);
       if( it != ar.end())
       {
          cnt++;
       }
    }
    cout<<cnt;
    return 0;
}