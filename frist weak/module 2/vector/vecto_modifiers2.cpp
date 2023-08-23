#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // vector<int>v={1,3,4,4,4,5,6,6,6,6,6,6,9,9,3,};
    //  replace(v.begin(),v.end(),6,100);
    // find(v.begin(),v.end(),6);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
    vector<int>v={1,3,3,3,4,2};
    auto it = find(v.begin(),v.end(),3);
    // cout<<*it;
    if(it==v.end())cout<<"No found";
    else{
        cout<<"found";
    }
   
    
    
    return 0;
}