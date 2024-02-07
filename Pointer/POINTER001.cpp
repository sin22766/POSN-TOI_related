#include <iostream>
#include <string>
using namespace std;

int main() {
    string n,m;
    cin >> n >> m;
    for (int i = 0; i < max(n.size(),m.size()); ++i) {
        if(i<n.size()){
            cout << n.at(i);
        }
        if(i<m.size()){
            cout << m.at(i);
        }
    }
    return 0;
}