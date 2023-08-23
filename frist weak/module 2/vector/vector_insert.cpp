#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v={10,20,30,40,50};
    // v.insert(v.begin()+2,1990);
   vector<int> v2 = {101,102,302};
   v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v)
    {
        cout<<x<<" ";  
    }
    return 0;
}