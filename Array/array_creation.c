#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[5]={2,4,6,8,10};          //creating array in stack
    int *p;
    int i;

    p=(int *)malloc(5*sizeof(int)); //creating array in heap
    p[0]=5;
    p[1]=7;
    p[2]=9;
    p[3]=2;
    p[4]=8;

    for(i=0;i<5;i++)
    {
        printf("\t,%d",A[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("\t,%d",p[i]);
    }
    return 0;
}