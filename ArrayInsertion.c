#include<stdio.h>
int main(){
    int i, n, num, pos, arr[20];
    printf("Enter the No. of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n  arr[%d]:", i);
        scanf("%d", &arr[i]);

    }
    printf("Enter the No. to be inserted:");
    scanf("%d", &num);
    printf("Enter the position at which the number has to be inserted:");
    scanf("%d", &pos);
    printf("\n array elements are");  // shift array elements to the right for insertion
    // CODE HERE
    // CODE HERE               // assign value to the position                    
    // CODE HERE                 // Increase the size of an array
    printf("The array after insertion is:");  
    // CODE HERE
    return 0;
}