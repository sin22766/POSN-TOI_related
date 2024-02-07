#include <iostream>
#include <algorithm>
using lli = long long int;
using namespace std;

int main() {
    lli n;
    cin >> n;
    double d[n];
    for(double &i:d){
        cin >> i;
    }
    sort(d,d+n);
    for(double &i:d){
        cout << i << " ";
    }
    return 0;
}