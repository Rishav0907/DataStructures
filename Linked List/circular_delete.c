#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *Next;
}*first;

void Create(int *A,int n)
{
    int i;
    struct Node *last,*t;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->Next=first;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=last->Next;
        last->Next=t;
        last=t;
    }
}

void Delete(struct Node *p,int index)
{
    int x;
    if(index==0)
    {
        while(p->Next!=first)
        {
            p=p->Next;
        }
        p->Next=first->Next;
        x=first->data;
        free(first);
        first=p->Next;
    }
    else
    {
        struct Node *q;
        int i,x;
        for(i=0;i<index-2;i++)
        {
            p=p->Next;
        }
        q=(struct Node *)malloc(sizeof(struct Node *));
        q=p->Next;
        p->Next=q->Next;
        x=q->data;
        free(q);
    }
}
void Display(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->Next;
    }while(p!=first);
}
int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    Display(first);
    printf("\n");
    Delete(first,3);
    Display(first);
}
