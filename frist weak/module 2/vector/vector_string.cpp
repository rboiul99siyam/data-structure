#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // int n;
    // cin>>n;
    // vector<string> v;
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for(string val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}