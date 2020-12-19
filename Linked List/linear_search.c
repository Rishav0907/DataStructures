#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
}*first=NULL;

void Create(int *A,int n)
{
    int i;
    struct Node *last,*t;
    first=(struct Node *)malloc(sizeof(struct Node *));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node *));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

struct Node * LinearSearch(struct Node *p,int key)
{
    while (p)
    {
        if(key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
    
}

struct Node * RLinearSearch(struct Node *p , int key)
{
    if(key==p->data)
    {
        return p;
    }
    else if(p==NULL)
    {
        return NULL;
    }

    RLinearSearch(p->next,key);
}


int main()
{
    int A[]={3,5,7,1,8,15,21};
    struct Node * temp;
    Create(A,7);
    temp=RLinearSearch(first,15);
    printf("%d",temp->data);

}