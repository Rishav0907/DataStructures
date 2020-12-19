#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node
{
    int data;
    struct Node *Next;
}*first=NULL;

void Create(int *A,int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->Next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=NULL;
        last->Next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->Next;
    }
}


int checkSorted(struct Node *p)
{
    int min;
    min=INT_MIN;
    while(p)
    {
        if(min > p->data)
        {
            printf("list is not sorted");
        }
        min=p->data;
        p=p->Next;
    }
}

int main()
{
    int A[]={3,5,7,20,11,13};
    Create(A,6);
    Display(first);
    checkSorted(first);
}