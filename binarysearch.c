#include<stdio.h>
int binarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size-1;
    while(low <= high)
    {
         mid = (low+high)/2;
         if(arr[mid] == element)
         {
             return mid;
         }
         if(arr[mid] < element)
         {
             low = mid+1;
         }
         else
         {
             high = mid-1;
         }
    }
    return -1;
}
int main()
{
    int arr[] = {23, 44, 65, 72, 81, 92, 104, 119, 172, 181, 200};
    int size = sizeof(arr)/sizeof(int);
    int element = 81;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element to be searched is found at %d \n" ,searchIndex);
    return 0;
}
