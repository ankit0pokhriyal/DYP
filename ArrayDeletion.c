#include<stdio.h>
int main(){
    int i, n,pos, arr[20];
    printf("Enter the No. of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n  arr[%d]:", i);
        scanf("%d", &arr[i]);

    }
    printf("Enter the position at which the number has to be Deleted:");
    scanf("%d", &pos);
    printf("\n array elements are");
    // loop for Deleting the code from position pos 
    // CODE HERE
    // CODE HERE                                  // Update the size of array
    printf("The array after Deletion is:");
    for(i=0; i<n;i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);

    }
    return 0;
}