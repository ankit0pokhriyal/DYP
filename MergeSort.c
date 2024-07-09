#include <stdio.h>
#define size 100
void merge(int a[], int, int, int);
void merge_sort(int a[],int, int);
void main()
{
int arr[size], i, n;
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
printf("\n Enter the elements of the array: ");
for(i=0;i<n;i++)
{
  scanf("%d", &arr[i]);
}
merge_sort(arr, 0, n-1);
printf("\n The sorted array is: \n");
for(i=0;i<n;i++)
printf(" %d\t", arr[i]);
}

void merge(int arr[], int beg, int mid, int end)
{
    int i = beg, j = mid+1, index = beg, temp[size], k;
    // CODE HERE

}
void merge_sort(int arr[], int beg, int end)
{
    int mid;
    // CODE HERE
}