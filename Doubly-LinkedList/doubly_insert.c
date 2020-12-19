#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void Create(int *A,int n)
{
    struct Node *last,*t;
    int i;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->next=first->prev=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void Insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index!=0)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=x;
        t->next=t->prev=NULL;

        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next)
        {
            p->next->prev=t;
        }
        p->next=t;
    }
    else if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=x;
        t->prev=NULL;
        first->prev=t;
        t->next=first;
        first=t;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    Display(first);
    printf("\n");
    Insert(first,0,60);
    Display(first);
    return 0;
}