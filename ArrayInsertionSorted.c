#include<stdio.h>
int main(){
    int i, n, j, num, pos, arr[20];
    printf("Enter the No. of elements:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n  arr[%d]:", i);
        scanf("%d", &arr[i]);

    }
    printf("Enter the No. to be inserted:");
    scanf("%d", &num);
    // Comapre the Number with sorted array and then insert it.
    // CODE HERE                                    
    n = n+1;
    printf("The array after insertion is:");
    for(i=0; i<n;i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);

    }
    return 0;
}