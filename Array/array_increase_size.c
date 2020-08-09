#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    int i;

    p=(int *)malloc(5*sizeof(int));// creating array in heap
    p[0]=5;
    p[1]=7;
    p[2]=9;
    p[3]=2;
    p[4]=8;

    q=(int *)malloc(10*sizeof(int));//creating array in heap

    //we will be increasing the size of p by copying the elements of p to q
    for(i=0;i<=5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    for(i=0;i<5;i++)
    {
        printf("\t%d",p[i]);
    }
    printf("\n");


return 0;
}