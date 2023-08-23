// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {   

//     int m,index;
//     cin>>m;
//     vector<int>ar(m);
//     for(int i=0;i<m;i++)
//     {
//         cin>>ar[i];
//     }
//     int  n;
//     cin>>n;
//     vector<int>ar1(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar1[i];
//     }
//     cin>>index;

//     // for(int i=0;i<n;i++)
//     // {
//     //     // replace(ar.begin()+index,ar.end(),ar[i+index],ar1[i]);
//     //     ar.insert()
//     // }
//     ar.insert(ar.begin()+index,ar.end(),ar[index+1]);
//     for(int i=0;i<m;i++)
//     {
//         cout<<ar[i]<<" ";
//     }

//     return 0;
// }
#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a+1];
   for(int i=0;i<a;i++) 
   {
     scanf("%d",&ar[i]);
   }
   int pos,value;
   scanf("%d%d",&pos,&value);
   for(int i=a;i>=pos+1;i--){
    ar[i] = ar[i-1];
   }
   ar[pos]=value;
   for(int i=0;i<a+1;i++){
    printf("%d ",ar[i]);
   }

    return 0;
}