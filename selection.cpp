#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n - 1; i++) {
        // Assume the minimum is the first element
        int minIndex = i;
        
        // Find the minimum element in the unsorted array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}

int main() {
    int arr[10] = {1, 6, 4, 8, 2, 10, 6, 5, 8, 2};
    selectionSort(arr, 10); 
    return 0;
}
