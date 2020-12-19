#include<stdio.h>

struct Node
{
	struct Node *lchild;
	int data;
	int height;
	struct Node *rchild;
}*root=NULL;

int NodeHeight(struct Node *p)
{
	int h1,h2;
	h1=p && p->lchild?p->lchild->height:0;
	h2=p && p->rchild?p->rchild->height:0;

	return h1>h2?h1+1:h2+1;
}

struct Node *RInsert(struct Node *p,int key)
{
	struct Node *t=NULL;

	if(p==NULL)
	{
		t=(struct Node *)malloc(sizeof(struct Node *));
		t->data=key;
		t->height=0;
		t->lchild=t->rchild=NULL;
		return t;
	}
	if(key<p->data)
	{
		p->lchild=RInsert(p->lchild,key);
	}
	else if(key>p->data)
	{
		p->rchild=RInsert(p->rchild,key);
	}
	p->height=NodeHeight(p);
	return p;
}

int main()
{

}