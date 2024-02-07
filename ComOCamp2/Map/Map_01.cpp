#include <iostream>
#include <map>

using namespace std;

int pos;

bool checkMap(map<int, string> _map, string value) {
    for (auto i : _map) {
        if (i.second == value) {
            pos = i.first;
            return true;
        }
    }
    return false;
}

void printMap(map<int, string> _map) {
    for (auto i : _map) {
        cout << i.first << " : " << i.second << " ";
    }
    cout << endl;
}

int main() {
    map<int, string> mp;
    mp.insert(pair<int, string>(1, "Apple"));
    mp.insert(pair<int, string>(3, "Banana"));
    mp.insert(pair<int, string>(2, "Potato"));
    mp.insert(pair<int, string>(5, "Ant-Man"));
    printMap(mp);
    if (checkMap(mp, "Potato")) {
        cout << "Yes\n";
        mp.erase(pos);
    } else {
        cout << "No\n";
    }
    if (checkMap(mp, "Ant")) {
        cout << "Yes\n";
        mp.erase(pos);
    } else {
        cout << "No\n";
    }
    printMap(mp);
    mp.erase(5);
    printMap(mp);
    if (mp.empty()) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        mp.clear();
    }
    return 0;
}
