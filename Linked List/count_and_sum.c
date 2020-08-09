#include<stdio.h>
#include<stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

void Create(int *A,int n)
{
    int i;
    struct Node *t , *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void CountAndSum(struct Node *p)
{
    int count=0;
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->next;
        count++;
    }
    printf("\nTotal nodes present are : %d",count);
    printf("\n Sum is %d",sum);
}

int main()
{
    int A[]={3,5,8,1,7,2};
    Create(A,6);
    CountAndSum(first);
}