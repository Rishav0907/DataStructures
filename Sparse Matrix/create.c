#include <stdio.h>
#include<stdlib.h>
struct Element
{
	int i; // row number
	int j; // column number
	int x; // elements
};

struct Sparse
{
	int m;    // number of rows
	int n;    // number of columns
	int num;  // non zero elements
	struct Element *ele;
};
void create(struct Sparse *s)
{
	int i;
	printf("Enter dimensions:");
	scanf("%d%d",&s->m,&s->n);
	printf("Enter the number of non zero elements:");
	scanf("%d",&s->num);
	s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));
	printf("Enter all non zero elements:");
	for(i=0;i<s->num;i++)
	{
		scanf("%d%d%d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
	}
}
void display(struct Sparse s)
{
	int i,j,k=0;
	for(i=0;i<s.m;i++)
	{
		for(j=0;j<s.n;j++)
		{
			if(i==s.ele[k].i && j==s.ele[k].j)
			{
				printf("%d ",s.ele[k++].x);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
void main()
{
	struct Sparse s;
	create(&s);
	display(s);
}
