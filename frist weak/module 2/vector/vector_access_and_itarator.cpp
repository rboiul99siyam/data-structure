#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector <int>v={1,2,3,4};
    // cout<<v.back();
    // cout<<v[0];
    // cout<<v.front();
    for(auto it =v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}