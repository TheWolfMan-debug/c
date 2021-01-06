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

// Status 是函数的类型，其值是函数结果状态代码
typedef int Status;

#define LIST_INIT_SIZE 100 // 线性表存储空间的初始分配量
#define LISTINCREMENT 10   // 线性表存储空间的分配增量

#define ElemType int


typedef struct
{
    ElemType *elem; // 存储空间基址
    int length;     // 当前长度
    int listsize;   // 当前分配的存储容量（以sizeof(ElemType)为单位)
}SqList;

// 初始化空的线性表
Status InitList_Sq(SqList *L)
{
    // 构造一个空的线性表
    L->elem = (ElemType *)malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if (!L->elem)
    {
        exit(MYOVERFLOW);
    }
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return OK;
}

// 给顺序表赋值
Status Assignment_Sq(SqList *L,int n)
{
    int i;
    if(n>L->listsize)
    {
        return MYOVERFLOW;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            L->elem[i] = rand() % n + 1;;
        }
        L->length = n;
        return OK;
    }
    
}

// 在指定位置插入指定的值
Status ListInsert_Sq(SqList *L, int i, ElemType e)
{
    // 在顺序线性表L中第i个位置之前插入新的元素e
    // i的合法值为1<=i<=ListLength_Sq(L)+1
    ElemType *p, *q;
    if (i < 1 || i > L->length + 1)
    {
        // i值不合法
        return ERROR;
    }
    if (L->length >= L->listsize)
    {
        // 当前存储空间已满，增加分配
        ElemType *newbase = (ElemType *)realloc(L->elem, sizeof(ElemType) * (LISTINCREMENT + L->listsize));
        // 存储分配失败
        if (!newbase)
        {
            exit(MYOVERFLOW);
        }
        L->elem = newbase;
        L->listsize += LISTINCREMENT;
    }
    q = &L->elem[i - 1];
    for (p = &L->elem[L->length - 1]; p >= q; --p)
    {
        *(p + 1) = *p;
    }
    *q = e;
    ++L->length;
    return OK;
}

Status get_Max(SqList sq,ElemType *e)
{
    int i=0;
    int j=0;
    *e = sq.elem[0];
    while (i < sq.length)
    {
        if(sq.elem[i]>*e)
        {
            *e = sq.elem[i];
            j = i + 1;
        }
        i++;
    }
    return j;

}


// 打印顺序表
void ShowList_Sq(SqList sq)
{
    int i;
    for(i=0;i<sq.length;i++)
    {
        printf("[%d]:%d ",i+1,sq.elem[i]);
    }
    printf("\n");
}

// 在顺序表中删除第i个元素，并返回其值
Status ListDelete_Sq(SqList *L,int i, ElemType *e)
{
    // 在顺序表L中删除第i个元素，并用e返回其值
    // i的合法值为1<=i<=ListLength_Sq(L)
    if((i<1)||(i>L->length))
    {
        return ERROR; // i值不合法
    }
    ElemType *p = &L->elem[i-1]; // p为被删除元素的位置
    *e = *p; // 被删除元素的值赋给e
    ElemType *q = L->elem + L->length - 1; // 表尾元素的位置
    for (++p;p<=q;++p) // 被删除元素之后的元素左移
    {
        *(p-1) = *p; 
    }
    --L->length; // 表长减一
    return OK;

}

int main()
{
    SqList sq; // 声明一个结构体 
    srand((unsigned int)time(NULL)); // 种下随机种子
    int e = 100; // 要插入顺序表的值
    int p = 4; // 插入的位置
    int n = 20; // 赋值数量
    int d = rand() % n + 1; // 删除元素的位置
    ElemType L_max;
    int p_max;
    ElemType dele_e; // 删除元素的值 
    InitList_Sq(&sq); // 初始化
    Assignment_Sq(&sq,n); // 赋值
    // // 初始化赋值后顺序表中的值
    // printf("初始化赋值后顺序表中的值:\n");
    // ShowList_Sq(sq);
    // ListInsert_Sq(&sq,p,e); // 插入值
    // // 插入指定值之后顺序表中的值
    // printf("插入指定值之后顺序表中的值:\n");
    // ShowList_Sq(sq);
    // // 删除指定值之后顺序表中的值
    // printf("删除指定值之后顺序表中的值:\n");
    // ListDelete_Sq(&sq,d,&dele_e);
    // ShowList_Sq(sq);
    // printf("删除的值为：%d\n",dele_e);

    ShowList_Sq(sq);
    p_max = get_Max(sq,&L_max);
    printf("最大值为：%d,它的位置为：%d\n",L_max,p_max);





    system("pause");
    return 0;
}
