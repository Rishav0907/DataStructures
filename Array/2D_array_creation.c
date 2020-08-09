#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}}; //created in stack
    int i,j;
    int *B[3]; // by createing an array of pointers

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }

    B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));

     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",B[i][j]); // printing garbage values because value not assigned
        }
        printf("\n");
    }

    int **c; //using double pointers

    c=(int **)malloc(3*sizeof(int));
    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));

      for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}