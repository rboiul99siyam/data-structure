#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // list<int> Mylist;
    // list<int>MyList(10);
    // cout<<Mylist.size();
    // cout<<MyList.size();
    // list<int> myList(10,5);
    // int cnt = 0;
    // for(auto it=myList.begin();it!=myList.end();it++)
    // {
    //     cnt++;
    //     cout<<*it<<" "<<endl;
    // }
    // cout<<cnt;
    // list<int>List2 = {1,3,4,5};
    int a[5]={10,20 ,30, 40,50};
    vector<int>v= {1,2,4,5,3};
    list<int>myList(v.begin(),v.end());
    // for(auto it=myList.begin();it != myList.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    for(int val:myList)
    {
        cout<<val<<" ";
    }

    return 0;
}