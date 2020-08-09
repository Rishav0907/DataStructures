#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[11];
    int size;
    int length;
};

/*void Find(struct Array arr)
{
    int i;
    int l=arr.A[0];
    int diff=l-0;
    for(i=0;i<arr.length;i++)
    {
        if (arr.A[i]-i !=diff)
        {
            printf("\nFound");
            printf("\n%d",diff+i);
        }
        break;
    }
}*/

void main()
{
    struct Array arr={{6,7,8,9,10,11,13,14,15,16,17},20,11};
    //printf("Finding missing element:");
    //Find(arr);
    int i;
    int l=arr.A[0];
    int diff=l-0;
    for(i=0;i<arr.length;i++)
    {
        if (arr.A[i]-i != diff)
        {
            printf("\nFound");
            printf("\n%d",diff+i);
            break;
        }
    }
}