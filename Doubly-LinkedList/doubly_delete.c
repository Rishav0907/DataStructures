#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node * prev;
	int data;
	struct Node * next;
}*first=NULL;

void Create(int *A,int n)
{
	struct Node *t,*last;
	int i;
	first=(struct Node *)malloc(sizeof(struct Node *));
	first->data=A[0];
	first->prev=first->next=NULL;
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

void Delete(struct Node *p,int index)
{
    int x;
    int i;
    if(index!=0)
    {
        for(i=0;i<index-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
        }
            x=p->data;
    }
    else if(index==1)
    {
        int x;
        first=first->next;
        x=p->data;
        if(first)
        {
            first->prev=NULL;
        }
    }
}

void main()
{
    int A[]={10,20,30,40,50};
    Create(A,5);
    Display(first);
    Delete(first,1);
    printf("\n");
    Display(first);
}