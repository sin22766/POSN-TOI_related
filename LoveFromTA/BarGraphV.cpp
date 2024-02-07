#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, maxE;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    maxE = *max_element(num, num + n);
    for (int j = 0; j < maxE + 1; ++j) {
        for (int i = 0; i < n; ++i) {
            if (j >= maxE) {
                cout << "[" << i + 1 << "] ";
            } else {
                if (j >= maxE - num[i]) {
                    cout << " #  ";
                } else {
                    cout << "    ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}

