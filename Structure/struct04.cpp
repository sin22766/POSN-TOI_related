#include <iostream>
#include <iomanip>
#include <cmath>

using lli = long long int;
using namespace std;

class lengthF {
public:
    lli feets;
    double inches;
    lengthF(lli feet = 0,double inc =0){
        feets = feet;
        inches = inc;
    }
    lengthF operator+(lengthF l1){
        lengthF a;
        if(inches+l1.inches>=12){
            int b = (inches+l1.inches)/12;
            a.inches=(inches+l1.inches)-(12*b);
            feets+=b;
        }else{
            a.inches=inches+l1.inches;
        }
        a.feets=feets+l1.feets;
        return a;
    }

};

int main() {
    lli x;
    double y;
    cout << fixed;
    cout << setprecision(1);
    cin >> x >> y;
    lengthF lf1(x,y);
    cin >> x >> y;
    lengthF lf2(x,y);
    cout << (lf1+lf2).feets << " " << (lf1+lf2).inches;
    return 0;
}