#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1,63,3,6,3,6,3,5,3,6,2};
    for (int i = 1; i < 11; ++i) {
        for (int j = 1; j < i; ++j) {
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for (int a:arr) {
        cout << a << " ";
    }
    return 0;
}