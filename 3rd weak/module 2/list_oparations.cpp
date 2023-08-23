#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {50, 20, 10, 60, 10};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();
    myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}