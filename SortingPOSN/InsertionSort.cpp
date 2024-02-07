#include <iostream>
#include <vector>
using namespace std;

int count = 0;
void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            count++;
        }
        arr[j + 1] = key;
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a;
    cin >> a;
    int arr[a];
    for (int k = 0; k < a; ++k) {
        cin >> arr[k];
    }
    insertionSort(arr,a);
    for (int b:arr) {
        cout << b << " ";
    }
    cout << endl << count;
    return 0;
}