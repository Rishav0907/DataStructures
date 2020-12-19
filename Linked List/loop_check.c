#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *Next;
}*first=NULL;

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

int isLoop(struct Node *f)
{
    struct Node *q,*p;
    p=q=f;
    do
    {
        p=p->Next;
        q=q->Next;
        q=q?q->Next:q;
    } while (p && q && p!=q);
    if(p==q)
    {
        return 1;
    }   
    else
    {
        return 0;
    }
}

int main()
{
    struct Node *t1,*t2;
    int A[]={10,20,30,40,50};
    Create(A,5);
    t1=first->Next->Next;
    t2=first->Next->Next->Next->Next;
    t2->Next=t1;
    printf("%d",isLoop(first));
    return 0;
}

