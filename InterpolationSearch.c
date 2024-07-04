#include <stdio.h>

int InterpolationSearch(int arr[], int n, int val) {
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {          
        int mid = left + (right - left)*((val - arr[left])/(arr[right] - arr[left]));  
        
        
        if (arr[mid] == val) {
            return mid;
        }
        
        
        else if (arr[mid] < val) {
            left = mid + 1;
        } else {
           
            right = mid - 1;
        }
    }
    
  
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 10;
    
    int result = InterpolationSearch(arr, n, val);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    
    return 0;
}