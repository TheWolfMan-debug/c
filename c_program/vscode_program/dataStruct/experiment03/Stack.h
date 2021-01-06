#include <stdlib.h>

// #define SElemType int
#define SElemType char
#define STACK_INIT_SIZE 10
#define STACKINCREMENT 10
#define Status int
#define OperandType char

#define OK 1
#define True 1
#define FALSE 0
#define ERROR -1
#define MYOVERFLOW -2
#define INFEASIBLE -1

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
        return ERROR;
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
