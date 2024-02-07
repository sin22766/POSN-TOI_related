#include <iostream>

using lli = long long int;
using namespace std;


int maxWin = 0;

void Lively(lli aWin, lli bWin, char result[30]) {
    if (aWin == maxWin) {
        cout << "Team A Wins " << bWin << ":" << aWin << " ";
        for (lli i = 0; i < aWin + bWin; i++) {
            cout << result[i];
        }
        cout << endl;
    } else if (bWin == maxWin) {
        cout << "Team B Wins " << bWin << ":" << aWin << " ";
        for (lli i = 0; i < aWin + bWin; i++) {
            cout << result[i];
        }
        cout << endl;
    } else {
        result[aWin + bWin] = 'A';
        Lively(aWin + 1, bWin, result);
        result[aWin + bWin] = 'B';
        Lively(aWin, bWin + 1, result);
    }
}

int main() {
    cin >> maxWin;
    Lively(0, 0, "");
}

