#include <iostream>
#include <string>
using lli = long long int;
using namespace std;

int main() {
    lli sum = 0;
    string n;
    getline(cin,n);
    for(char i:n){
        if(i=='o'){
            sum++;
        }
    }
    cout << sum;
    return 0;
}