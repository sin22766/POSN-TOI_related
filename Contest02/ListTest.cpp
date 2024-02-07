#include <iostream>
#include <list>
using lli = long long int;
using namespace std;

int getSequence(int n){
    if(n <= 1){
        return 1;
    }
    else{
        return getSequence(n-1)+n;
    }
}
int main(){
    list<int> List1;
    List1.push_back(1);
    List1.push_back(3);
    List1.push_back(100);
    List1.push_back(40);
    cout << List1.
    return 0;
}
