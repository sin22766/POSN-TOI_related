#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
using lli = long long int;
using namespace std;

struct student{
    string cNum;
    int num;
    string name;
    double grade;
};
bool compare(student a,student b){
    return a.grade < b.grade;
}
int main() {
    double gSum = 0;
    vector<student> stu;
    for (int i = 0; true; ++i) {
        string cl,nm;
        char mode;
        int numb;
        double gr;
        cin >> cl >> numb >> nm >> gr >> mode;
        gSum+=gr;
        student a;
        a.cNum = cl;a.num=numb;a.name=nm;a.grade=gr;
        stu.push_back(a);
        if(tolower(mode)!='y'){
            break;
        }
    }
    sort(stu.begin(),stu.end(),compare);
    printf("%.2f\n",gSum/stu.size());
    cout << "MAX : Name : " << stu.at(stu.size()-1).name << " Classroom : " << stu.at(stu.size()-1).cNum << " Number : " << stu.at(stu.size()-1).num << " GPA : ";
    printf("%.2f\n",stu.at(stu.size()-1).grade);
    cout << "MIN : Name : " << stu.at(0).name << " Classroom : " << stu.at(0).cNum << " Number : " << stu.at(0).num << " GPA : ";
    printf("%.2f\n",stu.at(0).grade);
    return 0;
}