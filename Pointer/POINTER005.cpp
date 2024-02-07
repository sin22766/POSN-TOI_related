#include <iostream>
#include <algorithm>
using lli = long long int;
using namespace std;

int main() {
    lli arr[20];
    for(lli &i:arr){
        cin >> i;
    }
    sort(arr,arr+20);
    cout << arr[19] << " " << arr[0];
    return 0;
}