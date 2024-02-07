#include <iostream>

using namespace std;

int main() {
    long long int n, k, sum = 0, collect = 0;
    cin >> n >> k;
    long long int house[n];
    for (long long int i = 0; i < n; ++i) {
        long long int temp;
        cin >> temp;
        house[i] = temp;
    }

    for (long long int j = 0; j < n; ++j) {
        sum += house[j];
        collect += house[j];
        if (collect >= k) {
            cout << j + 1 << " " << collect << "\n";
            collect = 0;
        }
    }
    cout << sum;
    return 0;
}