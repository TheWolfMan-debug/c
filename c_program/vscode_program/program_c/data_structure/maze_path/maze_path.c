#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <assert.h>
#include <locale.h>

// 函数结果状态代码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define MYOVERFLOW -2
#define STACK_INIT_SIZE 100 // 存储空间初始分配量
#define STACKINCREMENT 10   // 存储空间分配增量

#define N 10000

typedef int Status;

typedef struct
{
    int p_x;
    int p_y;
    int ispass;
} PosType; // 坐标位置

typedef struct
{
    int ord;      // 通道快在路径上的“序号”
    PosType seat; // 通道块在迷宫中的“坐标位置”
    int di;       // 从此通道块走向下一通道块的“方向”

} SElemType; // 栈的元素类型

typedef PosType *MazeType;

typedef struct
{
    SElemType *base; // 在栈构造之前和销毁之后，base的值为NULL
    SElemType *top;  // 栈顶指针
    int stacksize;   // 当前已分配的存储空间，以元素为单位
} SqStack;

Status InitStack(SqStack *S)
{
    // 构造一个空栈
    S->base = NULL;
    S->base = (SElemType *)malloc((STACK_INIT_SIZE) * sizeof(SElemType));
    if (!S->base)
    {
        return MYOVERFLOW;
    }
    S->top = S->base;
    S->stacksize = STACK_INIT_SIZE;
    return OK;
}

Status GetTop(SqStack S, SElemType *e)
{
    // 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR
    if (S.top == S.base)
    {
        return ERROR;
    }
    *e = *(S.top - 1);
    return OK;
}

Status Push(SqStack *S, SElemType e)
{
    // 插入元素e为新的栈顶元素
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
    *S->top++ = e;
    return OK;
}

Status Pop(SqStack *S, SElemType *e)
{
    // 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR
    if (S->top == S->base)
    {
        return ERROR;
    }
    *e = *--S->top;
    return OK;
}

Status StackEmpty(SqStack S)
{
    if (S.top == S.base)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

Status DeleteStack(SqStack *S)
{
    SElemType e;
    while (S->top != S->base)
    {
        Pop(S, &e);
        printf("%d:(%d,%d)\n", e.ord, e.seat.p_x, e.seat.p_y);
    }
    return OK;
}

Status isIn(PosType c, PosType f[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        if (c.p_x == f[i].p_x && c.p_y == f[i].p_y && c.ispass == f[i].ispass)
        {
            return OK;
        }
    }
    return ERROR;
}

Status Pass(PosType c, PosType f[])
{
    if (c.ispass && (!isIn(c, f)))
    {
        return OK;
    }
    return ERROR;
}

Status FootPrint(PosType c, PosType f[])
{
    static int i = 0;
    f[i++] = c;
    return OK;
}

PosType NextPos(PosType c, int p, MazeType maze)
{
    PosType n;
    if (p == 1)
    {
        n = maze[c.p_x * 4 + c.p_y +1];
    }
    else if (p == 2)
    {
        n = maze[(c.p_x+1) * 4 + c.p_y];
    }
    else if (p == 3)
    {
        n = maze[c.p_x * 4 + c.p_y -1];
    }
    else if (p == 4)
    {
        n = maze[(c.p_x-1) * 4 + c.p_y +1];
    }

    return n;
}

Status MazePath(MazeType maze, PosType start, PosType end)
{
    // 若迷宫maze中存在从入口start到出口end的通道，则球的一条存放在栈中
    // （从栈底到栈顶），并返回TRUE；否则返回FALSE

    SqStack S;
    InitStack(&S);
    PosType F[N];
    PosType curpos = start; // 设定“当前位置”为“入口位置”
    int curstep = 1;        // 探索第一步
    do
    {
        if (Pass(curpos, F)) // 当前位置可以通过，即是未曾走到过的通道块
        {
            FootPrint(curpos, F); // 留下足迹
            SElemType e;
            e.seat.p_x = curpos.p_x;
            e.seat.p_y = curpos.p_y;
            e.ord = curstep;
            e.di = 1;
            Push(&S, e);                                        // 加入路径
            if (curpos.p_x == end.p_x && curpos.p_y == end.p_y) // 到达终点（出口）
            {
                DeleteStack(&S);
                return TRUE;
            }
            curpos = NextPos(curpos, 1, maze); // 下一位置是当前位置的东邻
            curstep++;                         // 探索下一步
        }
        else // 当前位置不能通过
        {
            if (!StackEmpty(S))
            {
                SElemType e;
                Pop(&S, &e);
                while (e.di == 4 && !StackEmpty(S))
                {
                    FootPrint(e.seat, F); // 留下不能通过的标记，并退回一步
                    Pop(&S, &e);
                }
                if (e.di < 4)
                {
                    e.di++; // 换下一个方向探索
                    Push(&S, e);
                    curpos = NextPos(e.seat, e.di, maze); // 设定当前位置是该新房向上的相邻块
                }
            }
        }

    } while (!StackEmpty(S));
    return FALSE;
}

int main()
{
    int i, j;
    PosType pos;
    pos.ispass = 0;

    MazeType maze;
    maze = (MazeType)malloc(sizeof(MazeType) * 16);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            maze[i * 4 + j].p_x = i;
            maze[i * 4 + j].p_y = j;
            maze[i * 4 + j] = pos;
        }
    }
    maze[1 + 1].ispass = 1;
    maze[2 + 2].ispass = 1;
    maze[2 + 1].ispass = 1;

    PosType start = maze[1 + 1];

    PosType end = maze[2 + 2];

    MazePath(maze, start, end);

    system("pause");
    return 0;
}
