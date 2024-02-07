#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, num = 100;
    set<int> same;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        same.insert(temp);
    }
    cout << 100 - same.size();
    return 0;
}

