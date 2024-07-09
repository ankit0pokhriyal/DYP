#include <stdio.h>
#include <conio.h>
#define size 100
int partition(int a[], int beg, int end);
void quick_sort(int a[], int beg, int end);
void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array: ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
  scanf("%d", &arr[i]);
}
quick_sort(arr, 0, n-1);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
}

int partition(int a[], int beg, int end)
{
    int temp, left, right, flag, loc;
    // CODE HERE
}
void quick_sort(int a[], int beg, int end)
{
    int loc;
    // CODE HERE
}