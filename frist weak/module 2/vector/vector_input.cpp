#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // //  sort(v,v+n);
    // for( int val:v)
    // {
    //    cout<<val<<" ";
    // }
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),n);
     
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}