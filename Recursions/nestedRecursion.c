#include<stdio.h>
int funn(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    else
    {
        return (funn(funn(n+11)));
    }
    
}
void main()
{
    int x=95;
    printf("%d",funn(x));
}