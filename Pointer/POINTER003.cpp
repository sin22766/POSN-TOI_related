#include <iostream>
#include <iomanip>
using lli = long long int;
using namespace std;

int main() {
    cout << fixed;
    cout << setprecision(2);
    double sum = 0;
    for (int i = 0; i < 10; ++i) {
        double temp;
        cin >> temp;
        sum+=temp;
    }
    cout << sum/10.0;
    return 0;
}