#include <stdio.h>

void selectionSort(int arr[], int n) {
   // CODE HERE
}

void printArray(int arr[], int size) {
// CODE HERE
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted array: \n");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
