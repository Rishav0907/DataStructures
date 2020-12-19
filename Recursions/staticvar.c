#include<stdio.h>
int x=0;
int fun(int n)
{
    //static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1)+x;
    }
}
int main()
{
    int x=5;
    int fun1=fun(x);
    printf("%d",fun1);
}