#include <stdio.h>

int binarySearch(int arr[], int n, int val) {

// CODE HERE
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 10;
    
    int result = binarySearch(arr, n, val);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}
