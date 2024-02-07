#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    swap(a,b);
    cout << a << endl << b;
    return 0;
}