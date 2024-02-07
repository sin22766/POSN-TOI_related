#include <iostream>
#include <stack>

using namespace std;

struct Queue {
    stack<int> s1, s2;

    void enq(int value) {
        while (!s1.empty()) {
            cout << "move 1 2\n";
            s2.push(s1.top());
            s1.pop();
        }
        cout << "push 1\n";
        s1.push(value);
        while (!s2.empty()) {
            cout << "move 2 1\n";
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deq() {
        if (s1.empty()) {
            exit(0);
        }
        int x = s1.top();
        cout << "pop 1\n";
        cout << x << endl;
        s1.pop();
        return x;
    }
};

int main() {
    Queue newQueue;
    int command;
    cin >> command;
    for (int i = 0; i < command; ++i) {
        string word;
        int val;
        cin >> word;
        if (word == "enq") {
            cin >> val;
            newQueue.enq(val);
        } else {
            newQueue.deq();
        }
    }
    return 0;
}
