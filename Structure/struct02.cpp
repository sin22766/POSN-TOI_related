#include <iostream>
#include <string>
using lli = long long int;
using namespace std;

struct student{
    string name;
    string sname;
    lli sum;
    lli score;
};
int main() {
    lli stu,test;
    double pass;
    cin >> stu >> test;
    student stArr[stu];
    for (int i = 0; i < stu; ++i) {
        cin >> stArr[i].name >> stArr[i].sname;
        lli sum = 0;
        for (int j = 0; j < test; ++j) {
            lli temp;
            cin >> temp;
            sum+=temp;
        }
        stArr[i].score=sum;
    }
    cin >> pass;
    pass = (pass/100)*test*10;
    for (lli k = 0; k < stu; ++k) {
        if(stArr[k].score>=pass){
            cout << stArr[k].name << " " << stArr[k].sname << endl;
        }
    }
}