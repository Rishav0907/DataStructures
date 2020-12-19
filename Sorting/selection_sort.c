#include<stdlib.h>
#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[k]>arr[j])
            {
                k=j;
            }
        }
        swap(&arr[i],&arr[k]);
    }
}
int main()
{
    int arr[]={3,7,9,10,6,5,12,4,11,2}, n=10;
    selectionSort(arr,n);

    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}