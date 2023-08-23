#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    queue<int>newQ;
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        if(q.empty())
        {
            newQ.push(k);
            break;
        }
        newQ.push(k);
    }
    q = newQ;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}