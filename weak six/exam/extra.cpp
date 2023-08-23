#include <iostream>
#include <queue>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

struct CompareMarks {
    bool operator()(const Student& s1, const Student& s2) {
        if (s1.marks != s2.marks) {
            return s1.marks < s2.marks; // Max marks at the top
        }
        return s1.roll > s2.roll; // If marks are the same, min roll at the top
    }
};

int main() {
    priority_queue<Student, vector<Student>, CompareMarks> pq;
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    for (int i = 0; i < num_students; i++) {
        string name;
        int roll, marks;
        cout << "Enter student name, roll, and marks: ";
        cin >> name >> roll >> marks;
        Student new_student(name, roll, marks);
        pq.push(new_student);
    }

    int query;
    cout << "Enter the query number (0/1/2): ";
    cin >> query;

    if (query == 0) {
        string name;
        int roll, marks;
        cout << "Enter student name, roll, and marks: ";
        cin >> name >> roll >> marks;
        Student new_student(name, roll, marks);
        pq.push(new_student);
        cout << "Student added and current maximum marks student's data: " << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
    }
    else if (query == 1) {
        if (pq.empty()) {
            cout << "Empty" << endl;
        }
        else {
            cout << "Current maximum marks student's data: " << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
    }
    else if (query == 2) {
        if (pq.empty()) {
            cout << "Empty" << endl;
        }
        else {
            pq.pop();
            if (pq.empty()) {
                cout << "Empty" << endl;
            }
            else {
                cout << "Current maximum marks student's data after deletion: " << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }
    else {
        cout << "Invalid query number" << endl;
    }

    return 0;
}
