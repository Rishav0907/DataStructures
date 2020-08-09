#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};


void Display(struct Array arr)
{
    int i;
    printf("\nElements are:");
    for(i=0;i<arr.length;i++)
    {
        printf("%d",arr.A[i]);
    }
};

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int BinarySearch(struct Array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key==arr.A[mid])
        {
            return mid;
        }
        else if (key<arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}

// int LinearSearch(struct Array *arr,int key)
// {
//     int i;
//     for(i=0;i<arr->length;i++)
//     {
//         if (key==arr->A[i])
//         {
//            swap(&arr->A[i],&arr->A[i-1]); 
//            return i;  
//         }
        
//     }
//     return -1;
// }

int main()
{
    struct Array arr={{2,3,4,5,6,8},10,6};
    printf("\n%d",BinarySearch(arr,5));
   // printf("%d",LinearSearch(&arr,5));
    Display(arr);
    return 0;
    
}