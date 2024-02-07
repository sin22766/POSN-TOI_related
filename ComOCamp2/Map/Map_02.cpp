#include <iostream>
#include <map>

using namespace std;

int pos;

void printMap(map<string, int> _map) {
    for (auto i : _map) {
        cout << i.second << " \n";
    }
    cout << endl;
}

int main() {
    map<string, int> mp;
    int quarry;
    cin >> quarry;
    for (int i = 0; i < quarry; ++i) {
        string x;
        int m, y;
        cin >> m >> x;
        switch (m) {
            case 1:
                cin >> y;
                if (mp.find(x) != mp.end()) {
                    mp[x] += y;
                } else {
                    mp[x] = y;
                }
                break;
            case 2:
                mp[x] = 0;
                break;
            case 3:
                cout << mp.at(x);
                break;
            default:
                break;
        }
    }
    return 0;
}
