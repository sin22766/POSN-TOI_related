#include <iostream>
#include <string>

using lli = long long int;
using namespace std;

class timeC {
public:
    int hours;
    int minutes;
    int seconds;

    timeC(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void printT() {
        cout << hours << ":";
        (minutes<10)? cout << "0" <<minutes:cout << minutes;
        cout << ":";
        (seconds<10)? cout << "0" <<seconds:cout << seconds;
    }

    timeC operator-(timeC d) {
        timeC demo;
        timeC op(hours, minutes, seconds);
        if (seconds - d.seconds < 0) {
            demo.seconds = 60 + op.seconds - d.seconds;
            op.minutes -= 1;
        } else {
            demo.seconds = op.seconds - d.seconds;
        }
        if (minutes - d.minutes < 0) {
            demo.minutes = 60 + op.minutes - d.minutes;
            op.hours -= 1;
        } else {
            demo.minutes = op.minutes - d.minutes;
        }
        demo.hours = op.hours - d.hours;
        return demo;
    };
};

int main() {
    int tempH, tempM, tempS;
    cin >> tempH >> tempM >> tempS;
    timeC t1(tempH, tempM, tempS);
    cin >> tempH >> tempM >> tempS;
    timeC t2(tempH, tempM, tempS);
    timeC result = t2 - t1;
    t1.printT();
    cout << " - ";
    t2.printT();
    cout << " = ";
    result.printT();
    return 0;
}