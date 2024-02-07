#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (i == j) {
                cout << "#";
            } else {
                if (i == 0 && j != 1) {
                    cout << "#";
                } else if (i == a - 2 && j == a - 1) {
                    cout << "-";
                } else if (j == a - 1) {
                    cout << "#";
                } else {
                    cout << "-";
                }
            }

        }
        cout << endl;
    }
    return 0;
}

