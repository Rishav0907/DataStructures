#ifndef _HEADER_FILE_H_
#define _HEADER_FILE_H_

struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue {
    int size;
    int front;
    int rear;
    struct Node  **Q;
};

void create(struct Queue *q,int size)
{
    q->size = size;
    q->front =q->rear =0;
    q->Q=(struct Node **)malloc(sizeof(struct Node *) * q->size);
}

void Enqueue(struct Queue *q,struct Node * x)
{
    if(q->rear==q->size-1)
    {
        printf("\nQueue is full");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
    
}

struct Node * Dequeue(struct Queue *q)
{
    struct Node *x=NULL;
    if (q->front==q->rear)
    {
        printf("\nQueue is empty");
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
    
}

int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}



#endif //_HEADER_FILE_H_
