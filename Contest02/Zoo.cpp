#include <iostream>
#include <algorithm>
using lli = long long int;
using namespace std;

class zoo {
public:
    int no;
    char type;
    string name;
    string date;
};

bool compareZoo(zoo a, zoo b) {
    return a.type < b.type;
}

int main() {
    lli a;
    cin >> a;
    zoo aList[a];
    for (lli i = 0; i < a; i++) {
        cin >> aList[i].no >> aList[i].type >> aList[i].name >> aList[i].date;
    }
    sort(aList, aList + a, compareZoo);
    char temp = tolower(aList[0].type);
    lli typeCount = 0;
    for (lli j = 0; j < a; j) {
        if (tolower(aList[j].type) == temp) {
            cout << aList[j].name << endl;
            typeCount++;
            j++;
        } else {
            cout << "Type " << (char)toupper(temp) << ": " << typeCount << endl;
            temp = tolower(aList[j].type);
            typeCount = 0;
        }
    }
    if(a!=0){
        cout << "Type " << (char)toupper(temp) << ": " << typeCount << endl;
    }
    return 0;
}
