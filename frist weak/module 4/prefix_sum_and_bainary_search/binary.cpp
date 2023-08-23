#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);

    int l = 0;
    int r = n-1;
    int x;
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        int mid_index = (l+r)/2;
        if(ar[mid_index]==x)
        {
            flag =true;
            break;
        }

    }
    if(flag == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}