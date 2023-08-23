#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll, marks;
    student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else if (a.marks == b.marks)
        {
            if (a.roll < b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return a.name < b.name;
        }
    }
};
int main()
{

    priority_queue<student, vector<student>, cmp> p;
    int i;
    cin >> i;
    cin.ignore();

    while (i--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name, roll, marks);
        p.push(obj);
    }

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            student obj(name, roll, marks);
            p.push(obj);
        }
        else if (n == 1)
        {
            if (p.empty())
            {
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
            }
            else
            {
                
            }
        }
        else if (n == 2)
        {
            p.pop();
            if (!p.empty())
            {
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            cout << "Empty" << endl;
        }
    }
    return 0;
}