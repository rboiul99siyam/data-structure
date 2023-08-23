#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 30, 30, 30};
    list<int> newlist = {100, 200, 300};
    // list<int>newlist;
    // newlist = myList; sort cut always eta use korbo amora
    // newlist.assign(myList.begin(),myList.end()); long cut just use kore dekhlam eta emnite
    // myList.push_back(100); push_back mane amra value shese print hobe ;
    // myList.push_front(200); push_front mane amra value protthme print hobe;
    // myList.pop_back(); pop_back er mane hole amar shesher value delete kore dilam;
    // myList.pop_front();
    // myList.insert(next(myList.begin(),2),100);
    // myList.insert(next(myList.begin(),4),{100,200,300,400});
    // myList.insert(next(myList.begin(),4),newlist.begin(),newlist.end());

    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // replace(myList.begin(), myList.end(), 30, 100);
    // for (int val : myList)
    // {
    //     cout << val << " ";
    // }
    auto it = find(myList.begin(),myList.end(),390);
    if(it == myList.end()){
       cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    return 0;
}