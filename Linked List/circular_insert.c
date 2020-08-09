#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
}*first;

void Create(int *A,int n)
{
    struct Node *last,*t;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->Next=first;
    last=first;
    int i;
    
    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=last->Next;
        last->Next=t;
        last=t;
    }
}

void CInsert(struct Node *p,int index,int x)
{
    int j;
    struct Node *t;
    if(index!=1)
    {
        for(j=0;j<index-1;j++)
        {
            p=p->Next;
        }
    t=(struct Node *)malloc(sizeof(struct Node *));
    t->data=x;
    t->Next=p->Next;
    p->Next=t;
    }
    else if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=x;
        if(first==NULL)
        {
            first=t;
            first->Next=first;
        }
        else
        {
            while(p->Next!=first)
            {
                p=p->Next;
            }
            p->Next=t;
            t->Next=first;
            first=t;
        }
    }
}

void Display(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->Next;
    } while (p!=first);
    
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    CInsert(first,0,60);
    Display(first);
    return 0;
}