#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node * Next;
}*first;

void Create(int *A,int n)
{
    int i;
    struct Node *last,*t;
    first=(struct Node*)malloc(sizeof(struct Node *));
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
void Display(struct Node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->Next;    /* code */
    } while (p!=first);
    printf("\n");
    
}

void RDisplay(struct Node *p)
{
    int flag=0;
    if(p!=first || flag==0)
    {
        flag=1;
        printf("%d ",p->data);
        RDisplay(p->Next);
    }
    flag=0;
}

int main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    RDisplay(first);
}