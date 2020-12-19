#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void Create(struct Stack *st)
{
    printf("Enter size");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(sizeof(int *));
}

void Display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d \n",st.S[i]);
    }
    printf("\n");
}

void Push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("Stack overflow");
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
}

int Pop(struct Stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int Peek(struct Stack st,int pos)
{
    int x=-1;
    if(st.top-pos<0)
    {
        printf("Invalid position");
    }
    else
    {
        x=st.S[st.top-pos+1];
    }
    return x;
    
}

int stackTop(struct Stack st)
{
    if(st.top==-1)
    {
        return -1;
    }
    else
    {
        return(st.S[st.top]);
    }
}

int isEmpty(struct Stack st)
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

int isFull(struct Stack st)
{
    if(st.top==st.size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    struct Stack st;
    Create(&st);
    Push(&st,11);
    Push(&st,20);
    Push(&st,30);
    Display(st);
    Pop(&st);
    Display(st);

    printf("Peek:");
    printf("%d",Peek(st,1));

    printf("Stack Top:");
    printf("\n%d",stackTop(st));

    printf("isEmpty:");
    printf("%d",isEmpty(st));

    printf("isFull:");
    printf("%d",isFull(st));
}