#include <iostream>
#include <queue>

using namespace std;

void printPQ(priority_queue<int> _pq) {
    int n = _pq.size();
    for (int i = 0; i < n; ++i) {
        cout << _pq.top() << " ";
        _pq.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(10);
    pq.push(10);
    pq.push(10);
    cout << pq.size() << endl;
    printPQ(pq);
    cout << pq.top();
    pq.pop();
    printPQ(pq);
    if (pq.empty()) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        int n = pq.size();
        for (int i = 0; i < n; ++i) {
            pq.pop();
        }
    }
    return 0;
}
