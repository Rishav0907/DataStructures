#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;
int  Insert(int key)
{
    struct Node *t = root;
    struct Node *p, *r;
    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node *));
        p->data = key;
        p->lchild = p->rchild = NULL;
        return 1;
    }
    while (t != NULL)
    {
        r = t;
        if (t->data == key)
        {
            return 1;
        }
        else if (key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            t = t->lchild;
        }
    }
    p = (struct Node *)malloc(sizeof(struct Node *));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key < r->data)
    {
        r->lchild=p;
    }
    else
    {
        r->rchild=p;
    }
}
struct Node *Search(int key)
{
    struct Node *t=root;
    while(t!=NULL)
    {
        if(t->data==key)
        {
            return t;
        }
        if(key > t->data)
        {
            t=t->rchild;
        }
        else
        {
            t=t->lchild;
        }
        return NULL;
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d",p->data);
        Inorder(p->rchild);
    }
}
void main()
{
    // printf("Inserting");
    Insert(20);
    Insert(30);
    Insert(15);
    Insert(3);
    Insert(40);
    printf("Display");
    Inorder(root);
}