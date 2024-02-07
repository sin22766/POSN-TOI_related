#include <iostream>

using namespace std;

int main() {
    int a, b;
    char r, l;
    char c;
    cin >> a >> b >> c;
    if (c == 'R') {
        r = ' ';
        l = '*';
    } else if (c == 'L') {
        r = '*';
        l = ' ';
    }
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            if (i <= a / 2) {
                (j <= b / 2) ? cout << r : cout << l;
            } else {
                (j <= b / 2) ? cout << l : cout << r;
            }
        }
        cout << endl;
    }
    return 0;
}