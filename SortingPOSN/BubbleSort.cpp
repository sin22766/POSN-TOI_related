#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,count = 0;
    cin >> a;
    int arr[a];
    for (int k = 0; k < a; ++k) {
        cin >> arr[k];
    }
    while(true){
        bool isSwap = false;
        for (int i = 1; i < a; ++i) {
            if(arr[i]<arr[i-1]){
                count++;
                swap(arr[i],arr[i-1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }
    for (int a:arr) {
        cout << a << " ";
    }
    cout << endl << count;
    return 0;
}