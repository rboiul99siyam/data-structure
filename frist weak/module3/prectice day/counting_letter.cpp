#include<bits/stdc++.h>
using namespace std;
int main()
{   

    // int fre[26] = {0};
    // for(int i=0;i<n;i++)
    // {
        
    // }
         char a;
        cin>>a;
        int fre[26] = {0};
        fre[a-'a']++;
    }
    for(char i=97;i<=122;i++)
    {
        if(fre[i-97]>0)
        {
            for(int j=0;j<fre[i-'a'];j++)
            {
                cout<<i;
            }
        }
    return 0;
}