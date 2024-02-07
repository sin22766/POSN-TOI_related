#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {1, 7, 4, 7, 3, 2, 65, 7, 8, 3};
    make_heap(vi.begin(), vi.end());
    for (int i:vi) {
        cout << i << " ";
    }
    cout << "\n";
    vi.push_back(123);
    push_heap(vi.begin(), vi.end());
    for (int i:vi) {
        cout << i << " ";
    }
    return 0;
}
