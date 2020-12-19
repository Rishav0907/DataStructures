#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

void Create(int *A ,int n)
{
    int i;
    struct Node *t , *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Max(struct Node *p)
{
    int max=INT_MIN;
    while (p)
    {
        if(p->data > max)
        {
            max=p->data;
        }
        p=p->next;
    }
    printf("The maximum number present is %d",max);
    
}   

int main()
{
    int A[]={3,5,7,1,82,11,21,15};
    Create(A,8);
    Max(first);
}