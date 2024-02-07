#include <iostream>
#include <cmath>

using lli = long long int;
using namespace std;

int main() {
    lli n, m;
    cin >> n;
    m = pow(n * (n - 1), 2);
    cout << m;
    return 0;
}

