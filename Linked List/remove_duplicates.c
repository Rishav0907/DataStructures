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
void RemoveDuplicates(struct Node *p)
{
    struct Node *q = p->Next;

    while (q)
    {
        if(q->data==p->data)
        {
            p->Next=q->Next;
            free(q);
            q=p->Next;
        }
        else{
        p=q;
        q=q->Next;
        }
    }
    
}

int main()
{
    int A[]={3,7,7,9,15,21};
    Create(A,6);
    Display(first);
    RemoveDuplicates(first);
    printf("\n");
    Display(first);
}