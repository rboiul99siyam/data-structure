#include<bits/stdc++.h>
using namespace std;
int main()
{   
    vector <int> v;
    // cout<<v.max_size();
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(30);
    // cout<<v.capacity()<<endl;
    v.push_back(100);
    // cout<<v.capacity();
    // v.clear();
    // cout<<v.size()<<endl;
      v.resize(2);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    // cout<<v.capacity(); 
  
    
    return 0;
}