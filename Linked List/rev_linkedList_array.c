#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
}*first=NULL,*second=NULL,*third=NULL;

void Create(int *A,int n)
{
    int i;
    struct Node *last,*t;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->Next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node * )malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=NULL;
        last->Next=t;
        last=t;
    }
}

int Count(struct Node *p)
{
    int count=0;
    while (p)
    {
        count++;
        p=p->Next;
    }
    return count;
    
}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->Next;
    }
}

void Reverse1(struct Node *p)
{
    int *A,i=0;
    struct Node *q=p;
    A=(int *)malloc(sizeof(int)*Count(q));

    while(q)
    {
        A[i]=q->data;
        q=q->Next;
        i++;
    }
    q=p;
    i--;

    while(q)
    {
        q->data=A[i];
        q=q->Next;
        i--;
    }

}

void Reverse2(struct Node *p)
{
    struct Node *q,*r;
    q=r=NULL;
    
    while(p)
    {
        r=q;
        q=p;
        p=p->Next;
        q->Next=r;
    }
    first=q;
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    Reverse2(first);
    Display(first);
}