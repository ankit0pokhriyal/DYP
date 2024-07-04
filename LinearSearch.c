#include <stdio.h>

int linearSearch(int arr[], int n, int val) {
// CODE HERE
}

int main() {
    int arr[] = {2, 3, 4, 5, 2, 3, 4, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 18;

    int result = linearSearch(arr, n, val);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}




