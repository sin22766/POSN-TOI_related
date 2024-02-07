#include <iostream>
using namespace std;
using lli = long long int;

lli d1,d2,d3;
lli spicy(lli a){
    switch(a){
        case (1):
            return d1;
            break;
        case (2):
            return d2;
            break;
        case (3):
            return d3;
            break;
        default:
            return (10*a)+(2*spicy(a-1)+spicy(a-2)-spicy(a-3));
            break;
    }
}
int main() {
    lli n;
    cin >> d1 >> d2 >> d3;
    cin >> n;
    cout << spicy(n);
    return 0;
}
