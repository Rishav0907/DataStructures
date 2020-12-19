#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
}*first=NULL;

void Create(int *A,int n)
{
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->Next=NULL;
    last=first;
    int i;

    for(i=0;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=NULL;
        last->Next=t;
        last=t;
    }
}

void Insert(struct Node *p,int x,int pos)
{   
    int i;
    struct Node *q;
    if (pos <0)
    {
        return;
    }
    q=(struct Node *)malloc(sizeof(struct Node *));
    q->data=x;
    if(pos==0)
    {
        q->data=x;
        q->Next=first;
        first=q; 
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            p=p->Next;
        }
        q->Next=p->Next;
        p->Next=q;
    }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->Next;
    }

}
int main()
{
    int A[]={3,5,7,1,8,15,21};
    Create(A,7);
    Insert(first,85,4);
    Display(first);
}