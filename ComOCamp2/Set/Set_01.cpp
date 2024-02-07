#include <iostream>
#include <set>

using namespace std;

void printSet(set<int> _set) {
    for (int i : _set) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(2);
    s.insert(5);
    printSet(s);
    (s.find(10) != s.end()) ? cout << "Yes\n" : cout << "No\n";
    (s.find(15) != s.end()) ? cout << "Yes\n" : cout << "No\n";
    s.erase(2);
    printSet(s);
    if (s.empty()) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        s.clear();
    }
    return 0;
}
