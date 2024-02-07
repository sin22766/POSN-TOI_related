#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    stack<int> bin, hex;
    cin >> n;
    for (int i = n; i >= 1; i = i / 2) {
        bin.push(i % 2);
    }
    for (int i = n; i >= 1; i = i / 16) {
        hex.push(i % 16);
    }
    int binL = bin.size();
    int hexL = hex.size();
    for (int j = 0; j < binL; ++j) {
        cout << bin.top();
        bin.pop();
    }
    cout << "\n";
    for (int j = 0; j < hexL; ++j) {
        int t = hex.top();
        if (t < 10) {
            cout << t;
        } else {
            cout << char(t + 55);
        }
        hex.pop();
    }
}
