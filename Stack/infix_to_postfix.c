#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void Push(int x)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node *));
    if(t==NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    int x=-1;
    struct Node *t;
    if(top==NULL)
    {
        printf("Stack is full");
    }
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

int Pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

void Display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

char * IntoPost(char infix[])
{
    int i=0;
    int j=0;
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc(sizeof(char) * (len+2));

    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++]=infix[i++];
        else
        {
            if(Pre(infix[i]) > Pre(top->data))
            {
                Push(infix[i++]);
            }
            else
            {
                postfix[j++]=pop();
            }
        }
        
    }
    while(top!=NULL)
    {
        postfix[j++]=pop();
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
   char infix[]="a+b*c";
    Push('#');
   char *postfix=IntoPost(infix);
   printf("%s",postfix);

    return 0;
}