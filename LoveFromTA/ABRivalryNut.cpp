#include <iostream>

using namespace std;

bool a[100];
int winPoint, aWin = 0, bWin = 0;

void check(int m) {
    if (aWin > winPoint || bWin > winPoint) {
        return;
    } else if (aWin == winPoint || bWin == winPoint) {
        if (aWin > bWin) {
            printf("Team A Wins %d:%d ", aWin, bWin);
        } else {
            printf("Team B Wins %d:%d ", bWin, aWin);
        }
        for (int i = 0; i < aWin + bWin; ++i) {
            if (a[i]) {
                printf("A");
            } else if (!a[i]) {
                printf("B");
            }
        }
        cout << endl;
    } else {
        a[m] = true;
        aWin += 1;
        check(m + 1);

        a[m] = false;
        aWin -= 1;
        bWin += 1;
        check(m + 1);
        bWin -= 1;
    }
}

int main() {
    cin >> winPoint;
    check(0);
}
