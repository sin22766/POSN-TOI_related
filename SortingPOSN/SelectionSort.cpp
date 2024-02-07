#include <iostream>
#include <vector>
using namespace std;

int count = 0;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(arr[min_idx], arr[i]);
        count++;
    }
}

int main() {
    int a;
    cin >> a;
    int arr[a];
    for (int k = 0; k < a; ++k) {
        cin >> arr[k];
    }
    selectionSort(arr,a);
    for (int b:arr) {
        cout << b << " ";
    }
    cout << endl << count;
    return 0;
}