#include<stdio.h>
#include<malloc.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void Create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
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
int main()
{
    int A[]={3,5,7,10,15};
    Create(A,5);
    Display(first);
    return 0;
}