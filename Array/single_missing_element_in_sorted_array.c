#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};
int Find(struct Array arr)
{
    int i;
    int sum=0;
    for(i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    int s=(arr.length*(arr.length+1))/2;
    int missing=s-sum;
    printf("\n%d is the missing element",missing);
    return missing;
}
int main()
{
    struct Array arr={{1,2,4,3,5,7,8},20,8};
    printf("Finding missing element of a sorted array:");
    Find(arr);
    /*int i;
    int sum=0;
    for(i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    int s=(arr.length*(arr.length+1))/2;
    int missing=s-sum;
    printf("\n%d is missing",missing);*/
    return 0;
}
/*int Find(struct Array arr)
{
    int i;
    int sum=0;
    for(i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    int s=(arr.length*(arr.length+1))/2;
    int missing=s-sum;
    return missing;
}*/