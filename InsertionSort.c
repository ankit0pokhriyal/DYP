#include <stdio.h>

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n) {
   // code Here
}

// Function to print an array
void printArray(int arr[], int size) {
 // Code Here
}

// Driver program to test above functions
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}