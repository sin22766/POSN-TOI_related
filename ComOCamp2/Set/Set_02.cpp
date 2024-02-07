#include <iostream>
#include <set>

using namespace std;

void printSet(const set<int> _set) {
    for (int i : _set) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    int quarry;
    cin >> quarry;
    for (int i = 0; i < quarry; ++i) {
        int m, x;
        cin >> m >> x;
        switch (m) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                (s.find(x) != s.end()) ? cout << "Yes\n" : cout << "No\n";
                break;
            default:
                break;
        }
    }
    return 0;
}
