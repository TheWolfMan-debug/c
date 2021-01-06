#include <stdlib.h>

#define OK 1
#define True 1
#define FALSE 0
#define ERROR -1
#define MYOVERFLOW -2
#define INFEASIBLE -1

typedef char DataType;

typedef struct Node
{
    DataType data;           /*数据域*/
    struct Node *leftChild;  /*左子树指针*/
    struct Node *rightChild; /*右子树指针*/
} BiTreeNode;                /*结点的结构体定义*/

#define SElemType BiTreeNode *
#define STACK_INIT_SIZE 10
#define STACKINCREMENT 10
#define Status int
#define OperandType char

typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} SqStack;

Status InitStack(SqStack *S)
{
    S->base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S->base)
    {
        exit(MYOVERFLOW);
    }
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    return OK;
}

SElemType GetTop(SqStack S)
{
    if (S.top == S.base)
    {
        exit(ERROR);
    }

    return *(S.top - 1);
}

Status Push(SqStack *S, SElemType e)
{
    if (S->top - S->base >= S->stacksize)
    {
        S->base = (SElemType *)realloc(S->base, (S->stacksize + STACKINCREMENT) * sizeof(SElemType));
        if (!S->base)
        {
            exit(MYOVERFLOW);
        }
        S->top = S->base + S->stacksize;
        S->stacksize += STACKINCREMENT;
    }
    *(S->top) = e;
    S->top++;

    return OK;
}

Status Pop(SqStack *S, SElemType *e)
{
    if (S->top == S->base)
    {
        return ERROR;
    }
    --S->top;
    *e = *S->top;
    return OK;
}

Status StackEmpty(SqStack S)
{
    return S.top == S.base;
}
