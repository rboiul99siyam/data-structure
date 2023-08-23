// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int val;
//     node *next;
//     node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main()
// {   
//     // node* head(10);
//   node* head =  new node(10);
//   node * a = new node(20);

//   head->next = a;
//   cout<<head->val<<endl;
// //   cout<<a->val<<endl;
// //   cout<<head->next->val<<endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{   
   
    node * head = new node (10);
    node * a = new node (20);
    node  * b =new node (30);
    node * c = new node (40);
    node * d = new node (50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    cout<<head->val<<endl;
    cout<<a->val<<endl;
    cout<<b->val<<endl;
    cout<<c->val<<endl;
    cout<<d->val<<endl;

    return 0;
}

