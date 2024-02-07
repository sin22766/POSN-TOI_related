#include <iostream>
using namespace std;

void printArr(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int n,swapS=0,swapI=0,swapB=0;
    cin >> n;
    int arr[n];
    for(int a = 0;a < n;a++){
        cin >> arr[a];
    }
    //Selection
    for(int i = 0;i < n/2;i++){
        int minindex = i;
        int j;
        for(j = i+1;j < n/2;j++){
            if(arr[j]<arr[minindex])
                minindex = j;
        }
        swapS++;
        swap(arr[minindex],arr[i]);
    }
    printArr(arr,n);
    cout << endl;
    //Insert
    for(int i = n/2+1;i < n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=n/2&&arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            swapI++;
        }
        arr[j+1] = key;
    }
    printArr(arr,n);
    cout << endl;
    //Bubble
    while(true){
        bool isSwap = false;
        for(int k = 1;k < n;k++){
            if(arr[k]<arr[k-1]){
                swap(arr[k],arr[k-1]);
                swapB++;
                isSwap = true;
            }
        }
        if(!isSwap){
            break;
        }
    }
    printArr(arr,n);
    cout << "\n" << swapS << " "  << swapI-1 << " " << swapB;
    return 0;
}
