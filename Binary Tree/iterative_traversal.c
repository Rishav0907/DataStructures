#include<stdio.h>
#include<stdlib.h>
#include "queue.h"
#include "stack.h"

struct Node *root = NULL;

void Treecreate()
{
	struct Node*p,*t;
	int x;
	struct Queue q;

	printf("Enter root value");
	scanf("%d",&x);
	root=(struct Node *)malloc(sizeof(struct Node*));
	root->data=x;
	root->lchild=NULL;
	root->rchild=NULL;

	Enqueue(&q,root);

	while (!isEmpty(q))
	{
		 p=Dequeue(&q);
        printf("Enter left child: ");
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            Enqueue(&q,t);
        }
        printf("enter right child: ");
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            Enqueue(&q,t);
        }
	}
	
}

void iterative_preorder(struct Node *t)
{
	struct Stack stk;
	CreateStack(&stk,100);
	
	while(t!=NULL || !isEmptyStack(&stk))
	{
		if(t)
		{
			printf("%d ",t->data);
			Push(&s,t);
			t=t->lchild;
		}
		else
		{
			t=Pop(&s);
			t=t->lchild;
		}
		
	}
}

int main()
{
	Treecreate();
	printf("Preorder");
	iterative_preorder(root);
	return 0;
}
