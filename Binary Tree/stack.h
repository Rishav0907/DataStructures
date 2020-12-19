#include "queue.h"
#ifndef _HEADER_FILE_H_
#define _HEADER_FILE_H_

struct Stack {
    int size;
    int Top;
    Struct Node **s;
};

void CreateStack(struct Stack *st,int size)
{
    st->size=size;
    st->top=-1;
    st->s=(struct Stack *)malloc(sizeof(struct Node *)*size);
}
void Push(struct Stack *st,struct Node *x)
{
    if(st->top>=st->size-1)
    {
        printf("\nStack overflow");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
    
}

struct Node *Pop(struct Stack *st)
{
    struct Node *x=NULL;
    if(st->top=-1)
    {
        printf("\nStack underflow");
    }
    else
    {
        x=st->s[st->top];
    }
    return x;
    
}

int isEmptyStack(struct Stack st)
{
    if(st.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int idFullStack(struct Stack *st)
{
    return st->top==st->size-1;
} 


#endif //_HEADER_FILE_H_
