// 给定一段程序代码，程序代码所完成的功能为：
// （1）建立一个线性表；
// （2）依次输入数据元素1,2,3,4,5,6,7,8,9,10；
// （3）删除数据元素5；
// （4）依次显示当前线性表中的数据元素。
// 假设该线性表的数据元素个数在最坏情况下不会超过100个，要求使用顺序表。
// 程序中有3处错误的地方，有标识，属于逻辑错误，
// 对照书中的代码仔细分析后，要求同学们修改错误的代码，
// 修改后上机调试得到正确的运行结果。

// 1.改正上述程序中的错误。
// 2.编写合并函数，将两个有序线性表合并为一个有序表并在主函数中加以测试。
// 3.完成实验报告的撰写。

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int DataType;

typedef struct
{
    DataType list[MaxSize];
    int size;
} SeqList;

void ListInitiate(SeqList *L) /*初始化顺序表L*/
{
    L->size = 0; /*定义初始数据元素个数*/
}

int ListLength(SeqList L) /*返回顺序表L的当前数据元素个数*/
{
    return L.size;
}

int ListInsert(SeqList *L, int i, DataType x)
/*在顺序表L的位置i（0 ≤ i ≤ size）前插入数据元素值x*/
/*插入成功返回1，插入失败返回0*/
{
    int j;
    if (L->size >= MaxSize)
    {
        printf("顺序表已满无法插入! \n");
        return 0;
    }
    else if (i < 0 || i > L->size)
    {
        printf("参数i不合法! \n");
        return 0;
    }
    else
    { //此段程序有一处错误
        for (j = L->size; j > i; j--)
            L->list[j] = L->list[j - 1]; /*为插入做准备*/
        L->list[i] = x;                  /*插入*/
        L->size++;                       /*元素个数加1*/
        return 1;
    }
}

int ListDelete(SeqList *L, int i, DataType *x)
/*删除顺序表L中位置i（0 ≤ i ≤ size - 1）的数据元素值并存放到参数x中*/
/*删除成功返回1，删除失败返回0*/
{
    int j;
    if (L->size <= 0)
    {
        printf("顺序表已空无数据元素可删! \n");
        return 0;
    }
    else if (i < 0 || i > L->size - 1)
    {
        printf("参数i不合法");
        return 0;
    }
    else
    { //此段程序有一处错误

        *x = L->list[i]; /*保存删除的元素到参数x中*/
        for (j = i; j <= L->size - 1; j++)
            L->list[j] = L->list[j + 1]; /*依次前移*/
        L->size--;                       /*数据元素个数减1*/
        return 1;
    }
}

int ListGet(SeqList L, int i, DataType *x)
/*取顺序表L中第i个数据元素的值存于x中，成功则返回1，失败返回0*/
{
    if (i < 0 || i > L.size - 1)
    {
        printf("参数i不合法! \n");
        return 0;
    }
    else
    {
        *x = L.list[i];
        return 1;
    }
}

void MergeList(SeqList La, SeqList Lb, SeqList *Lc)
{
    int i = 0, j = 0, k = 0;
    DataType a, b;
    int La_len = ListLength(La);
    int Lb_len = ListLength(Lb);

    while ((i < La_len) && (j < Lb_len))
    {
        ListGet(La, i, &a);
        ListGet(Lb, j, &b);
        if (a <= b)
        {
            ListInsert(Lc, k++, a);
            ++i;
        }
        else
        {
            ListInsert(Lc, k++, b);
            ++j;
        }
    }
    while (i < La_len)
    {
        ListGet(La, i++, &a);
        ListInsert(Lc, k++, a);
    }
    while (j < Lb_len)
    {
        ListGet(Lb, j++, &b);
        ListInsert(Lc, k++, b);
    }
}

void main(void)
{
    SeqList myLista;
    int i, x;
    ListInitiate(&myLista);
    ListInsert(&myLista, 0, 1);
    ListInsert(&myLista, 1, 3);
    ListInsert(&myLista, 2, 5);
    ListInsert(&myLista, 3, 17);

    SeqList myListb;
    ListInitiate(&myListb);
    ListInsert(&myListb, 0, 2);
    ListInsert(&myListb, 1, 4);
    ListInsert(&myListb, 2, 6);
    ListInsert(&myListb, 3, 16);
    ListInsert(&myListb, 4, 46);

    SeqList myListc;
    ListInitiate(&myListc);


    printf("链表a:\n");
    for (i = 0; i < ListLength(myLista); i++)
    {
        ListGet(myLista, i, &x); //此段程序有一处错误
        printf("%d ", x);
    }
    printf("\n链表b:\n");
    for (i = 0; i < ListLength(myListb); i++)
    {
        ListGet(myListb, i, &x); //此段程序有一处错误
        printf("%d ", x);
    }

    MergeList(myLista, myListb, &myListc);


    printf("\n合并后：\n");

    for (i = 0; i < ListLength(myListc); i++)
    {
        ListGet(myListc, i, &x); //此段程序有一处错误
        printf("%d ", x);
    }

    printf("\n");

    system("pause");

}







