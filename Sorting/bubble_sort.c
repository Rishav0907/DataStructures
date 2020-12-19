#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int arr[],int n)
{
    int j=0,i=0,flag=0;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main()
{
    int arr[]={3,7,9,10,6,5,12,4,11,2}, n=10;
    bubbleSort(arr,n);

    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}