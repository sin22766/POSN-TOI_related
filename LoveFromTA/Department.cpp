#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k, sumW = 0, sumQ;
    cin >> n >> k;
    int w[n];
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    sort(w, w + n);
    for (int j = 0; j < n; ++j) {
        if (sumW + w[j] < k) {
            sumW += w[j];
            sumQ = j + 1;
        } else {
            break;
        }
    }
    cout << sumQ;
}

