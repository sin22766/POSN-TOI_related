#include <iostream>
#include <algorithm>
using namespace std;

struct student{
    int ID;
    double grade;
};
int main() {
    int n;
    bool have = false;
    double least;
    cin >> n;
    student studentA[n];
    for (student &a:studentA) {
        cin >> a.ID >> a.grade;
    }
    cin >> least;
    for (student a:studentA) {
        if(a.grade >= least){
            cout << a.ID << endl;
            have = true;
        }
    }
    if(!have){
        cout << "None";
    }
}