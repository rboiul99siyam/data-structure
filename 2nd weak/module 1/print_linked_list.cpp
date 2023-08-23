#include <bits/stdc++.h>
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
    cout << "Enter Your Password number always 6 to 8 number and digit letter must be :" << endl;
    int n;
    cin >> n;
    cout<<"Your are Right Password Thank You : "<<endl;
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    node *tmp = head;

    while (tmp != NULL)
    {
        cout <<"You are information :"<< tmp->val << endl;
        tmp = tmp->next;
    }

    cout<<"Thank You !";

    return 0;
}