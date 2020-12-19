#include<stdio.h>
#include<stdlib.h>

struct Queue {
    int size;
    int front;
    int rear;
    int *Q;
};

void Enqueue(struct Queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full!\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is empty");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
    
}

void Display(struct Queue q)
{
    int i;
    for(i=q.front;i<q.rear;i++)
    {
        printf("\n%d",q.Q[i]);
    }
}

int main()
{
    struct Queue q;
    int i;
    printf("Enter the size of array:");
    scanf("%d",&q.size);
    q.Q=(int *)malloc(sizeof(int *)*q.size);
    q.front=-1;
    q.rear=-1;
    Enqueue(&q,5);
    Enqueue(&q,20);
    Enqueue(&q,12);
    Enqueue(&q,15);
    dequeue(&q);
    Enqueue(&q,41);
    Display(q);
    dequeue(&q);
    Display(q);
    return 0;
}