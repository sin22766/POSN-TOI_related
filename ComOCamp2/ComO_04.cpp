#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mem[n];
    for (int i = 0; i < n; ++i) {
        mem[i] = 0;
    }
    stack<int> his[n];
    for (int i = 0; i < m; ++i) {
        bool kept = false;
        int x, y, z;
        char mode;
        cin >> mode;
        if (mode == '=') {
            cin >> x >> y;
            mem[x - 1] = y;
            kept = true;
        } else if (mode == '+') {
            cin >> x >> y >> z;
            mem[z - 1] = mem[x - 1] + mem[y - 1];
            kept = true;
        } else if (mode == '-') {
            cin >> x >> y >> z;
            mem[z - 1] = mem[x - 1] - mem[y - 1];
            kept = true;
        } else if (mode == 'C') {
            cin >> x >> y;
            mem[y - 1] = mem[x - 1];
            kept = true;
        } else if (mode == 'P') {
            cin >> x;
            cout << mem[x - 1] << "\n";
        } else if (mode == 'U') {
            cin >> x;
            for (int k = 0; k < n; ++k) {
                for (int j = 1; j < x + 1; ++j) {
                    his[k].pop();
                }
                mem[k] = his[k].top();
            }
        }
        if (kept) {
            for (int j = 0; j < n; ++j) {
                his[j].push(mem[j]);
            }
        }
    }
}
