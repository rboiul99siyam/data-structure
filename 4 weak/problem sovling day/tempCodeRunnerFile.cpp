#include <iostream>
#include <stack>
#include <queue>
using namespace std;

bool areStackAndQueueEqual(stack<int>& stk, queue<int>& q) {
    if (stk.size() != q.size())
        return false;

    while (!stk.empty()) {
        if (stk.top() != q.front())
            return false;

        stk.pop();
        q.pop();
    }

    return true;
}

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> stk;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        stk.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    if (areStackAndQueueEqual(stk, q)) {
        cout << "Both stack and queue are the same." << endl;
    } else {
        cout << "Both stack and queue are different." << endl;
    }

    return 0;
}
