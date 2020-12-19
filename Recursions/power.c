#include<stdio.h>
int power(int b,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
    return power(b,p-1)*b;    
    }
}
int main()
{
    // int b,p;
    // b=2;
    // p=5;
    printf("%d",power(2,5));
    return 1;
}