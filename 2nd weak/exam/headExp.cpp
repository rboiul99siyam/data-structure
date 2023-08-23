#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

void insertHead(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void insertTail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printHeadTail(Node *head, Node *tail)
{
    if (head != NULL)
    //     cout << "List is empty!" << endl;
    // else
        cout << "Head: " << head->val << ", Tail: " << tail->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int queries;
    cin >> queries;

    for (int i = 0; i < queries; i++)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
            insertHead(head, tail, v);
        else if (x == 1)
            insertTail(head, tail, v);

        printHeadTail(head, tail);
    }

    return 0;
}
