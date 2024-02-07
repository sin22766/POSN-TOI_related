#include <iostream>

using lli = long long int;
using namespace std;

string binaryC(int a) {
    string bi = "";
    for (int i = a; i > 0; i = i / 2) {
        bi.push_back(i % 2 + 48);
    }
    return bi;
}

int main() {
    int a;
    cin >> a;
    for (int i = binaryC(a).size() - 1; i >= 0; --i) {
        cout << binaryC(a)[i];
    }
}

