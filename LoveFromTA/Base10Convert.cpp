#include <iostream>

using lli = long long int;
using namespace std;

lli baseConvert(lli Number, lli Base) {
    if (Number <= 0) {
        return 0;
    } else {
        return (Number % Base) + 10 * baseConvert(Number / Base, Base);
    }
}

int main() {
    lli n;
    cin >> n;
    for (lli i = 2; i <= 9; ++i) {
        cout << i << " : " << baseConvert(n, i) << endl;
    }
    return 0;
}