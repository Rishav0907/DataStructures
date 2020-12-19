#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
}*first=NULL;

void Create(int *A , int n)
{
    int i;
    struct Node *last,*t;
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

int Delete(struct Node *p, int index)
{
    struct Node *q=NULL;
    int i;
    int x=-1;
    if (index==1)
    {
        q=first;
        x=q->data;
        first=first->Next;
        free(q);
        return x;
    }
    else
    {
        for(i=0;i<index-1;i++)
        {
            q=p;
            p=p->Next;
        }
        q->Next=p->Next;
        x=p->data;
        //free(p);
        return x;
    }
}

int main()
{
    int A[]={3,7,1,8,12,9};
    Create(A,6);
    Delete(first,4);
    Display(first);
}