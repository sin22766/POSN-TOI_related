#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

bool Compare(pair<char, int> p1, pair<char, int> p2) {
    return p1.second < p2.second;
};

int main() {
    int k;
    string word;
    cin >> k >> word;
    map<char, int> non;
    for (char i:word) {
        if (non.find(i) != non.end()) {
            ++non[i];
        } else {
            non[i] = 1;
        }
    }
    sort(non.begin(), non.end(), Compare);
    while (k > 0) {

    }
    return 0;
}
