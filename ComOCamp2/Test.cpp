#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> arrStack[3];
    for (int i = 0; i < 4; ++i) {
        arrStack[0].push(i);
    }
    for (int i = 0; i < 6; ++i) {
        arrStack[1].push(i * 10);
    }
    for (int i = 0; i < 4; ++i) {
        arrStack[2].push(i * 100);
    }
    for (int j = 0; j < 3; ++j) {
        cout << "ArrStack[" << j + 1 << "]\n";
        int stackL = arrStack[j].size();
        for (int i = 0; i < stackL; ++i) {
            cout << arrStack[j].top() << endl;
            arrStack[j].pop();
        }
    }
    return 0;
}
