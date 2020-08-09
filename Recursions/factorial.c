// #include<stdio.h>
// int fact(int n)
// {
//     if(n==0){
//         return 1;
//     }
//     else if(n<0)
//     {
//         return 0;
//     }
    
//     else
//     {
//         return fact(n-1)*n;
//     }
    
// }
// int main()
// {
//     int x=-5;
//     printf("%d",fact(x));
//     return 0;
// }
#include<stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
    int x=5;
    printf("%d",fact(x));
}