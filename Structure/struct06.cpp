#include <iostream>
#include <cmath>
#include <iomanip>

using lli = long long int;
using namespace std;

class point {
    public:
        int x;
        int y;
        point(int xt = 0,int yt =0){
            x = xt;
            y = yt;
        }
        double dist(point p2){
            return sqrt( pow((p2.x-x),2)+pow((p2.y-y),2));
        }

};

int main() {
    cout << fixed;
    cout << setprecision(4);
    int x,y;
    cin >> x >> y;
    point p1(x,y);
    cin >> x >> y;
    point p2(x,y);
    cout << p1.dist(p2);
    return 0;
}