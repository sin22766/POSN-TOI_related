#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<pair<int, int>> airport;
    for (int i = 0; i < n; ++i) {
        pair<int, int> time;
        cin >> time.first >> time.second;
        if (i > 0) {
            if (time.second < airport.top().second) {

            } else {
                airport.push(time);
            }
            if (time.first > airport.top().second) {
                airport.pop();
            }
        } else {
            airport.push(time);
        }
    }
    (airport.size() > 1) ? cout << "Yes" : cout << "No";
    return 0;
}