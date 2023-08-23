// #include <bits/stdc++.h>
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

//     node a(10);
//     node b(20);

//     a.next = &b;

//     cout << a.val << endl;
//     cout << a.next->val << endl;
//     return 0;
// }

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

    node a(10);
    node b(20);
    node c(30);

    a.next = &b;
    b.next = &c;

    cout << a.val << " " << b.val << " " << c.val;

    return 0;
}
