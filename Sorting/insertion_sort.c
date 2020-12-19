#include<stdio.h>
#include<stdlib.h>

void insertionSort(int arr[],int n)
{
    int x,i,j;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=arr[i];
        while(arr[j]>x && j>-1)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main()
{
    int arr[]={3,7,9,10,6,5,12,4,11,2}, n=10;
    insertionSort(arr,10);

    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}