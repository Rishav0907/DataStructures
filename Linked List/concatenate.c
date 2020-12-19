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
void Create2(int *A,int n)
{
    int i;
    struct Node *last,*t;
    second=(struct Node *)malloc(sizeof(struct Node *));
    second->data=A[0];
    second->Next=NULL;
    last=second;

    for(i=1;i<n;i++)
    {
        t=(struct Node * )malloc(sizeof(struct Node *));
        t->data=A[i];
        t->Next=NULL;
        last->Next=t;
        last=t;
    }
}

void Concatenate(struct Node *p, struct Node *q)
{
    third=p;
    while(p->Next!=NULL)
    {
        p=p->Next;
    }
    p->Next=q;

}

void Display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->Next;
    }
}

int main()
{
    int A[]={10,20,30,40,50};
    int B[]={1,2,3,4,5};
    Create(A,5);
    Create2(B,5);
    printf("First");
    printf("\n");
    Display(first);
    printf("\n");
    printf("Second");
    printf("\n");
    Display(second);
    printf("\n");
    printf("Concatenated:");
    printf("\n");
    Concatenate(first,second);
    Display(third);
}