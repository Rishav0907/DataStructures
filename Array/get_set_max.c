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
        printf(",%d",arr.A[i]);
    }
};
int Get(struct Array arr, int index)
{
    if (index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
    
}
int Set(struct Array *arr,int index,int x)
{
    int i;
    if (index>=0 && index<arr->length)
    {
        arr->A[index]=x;
    }
    
}
int Max(struct Array arr)
{
    int max=arr.A[0];
    int i;
    for(i=0;i<=arr.length;i++)
    {
        if (arr.A[i]>max)
        {
            max=arr.A[i];
        }
        
    }
    return max;
}
int Min(struct Array arr)
{
    int min=arr.A[0];
    int i;
    for(i=0;i<=arr.length;i++)
    {
        if (arr.A[i]<min)
        {
            min=arr.A[i];
        }
        
    }
    return min;
}
int Sum(struct Array arr)
{
    int i;
    int sum=0;
    for(i=0;i<=arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    return sum;
}
float Average(struct Array arr)
{
    return Sum(arr)/arr.length;
}

int main()
{
    struct Array arr={{2,3,4,5,9,52},10,5};
    //printf("%d",Get(arr,2));
    //printf("%d",Set(&arr,3,50));
    //printf("%d",Max(arr));
    //printf("%d",Min(arr));
    //printf("%d",Sum(arr));
    printf("%f",Average(arr));
    Display(arr);
    return 0;
    
}
