#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{
    if(n>0)
    {
        return sum(n-1)+n;       
    }  
}
void main()
{
    int n;
    n=3;
    printf("%d",sum(n));
}