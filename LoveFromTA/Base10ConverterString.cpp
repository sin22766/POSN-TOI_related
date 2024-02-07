#include <iostream>
#include <string>

using lli = long long int;
using namespace std;

string baseConvert(lli Number, int Base) {
    if (Number <= 0) {
        return "";
    } else {
        return baseConvert(Number / Base, Base).append(1, char(Number % Base + 48));
    }
}

int main() {
    lli n;
    cin >> n;
    for (int i = 2; i <= 9; ++i) {
        cout << i << " : " << baseConvert(n, i) << endl;
    }
    return 0;
}