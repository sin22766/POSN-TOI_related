#include <iostream>
#include <queue>

using namespace std;

class Person {
public:
    string name;
    int age;
    float high;
};

struct CompareHeight {
    bool operator()(Person const &p1, Person const &p2) {
        return p1.high < p2.high;
    }
};

int main() {
    priority_queue<Person, vector<Person>, CompareHeight> pq;
    Person obj;
    obj.name = "Ped";
    obj.age = 1;
    obj.high = 200;
    Person obj2;
    obj2.name = "Kai";
    obj2.age = 3;
    obj2.high = 3000;
    Person obj3;
    obj3.name = "Mu";
    obj3.age = 10;
    obj3.high = 20;
    pq.push(obj);
    pq.push(obj2);
    pq.push(obj3);
    int n = pq.size();
    for (int i = 0; i < n; ++i) {
        cout << pq.top().name << " ";
        pq.pop();
    }
    return 0;
}
