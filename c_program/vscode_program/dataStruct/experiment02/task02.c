// （1）建立一个线性表；
// （2）依次输入数据元素1,2,3,4,5,6,7,8,9,10；
// （3）删除数据元素5；
// （4）依次显示当前线性表中的数据元素。
// 假设该线性表的数据元素个数在最坏情况下不会超过100个，要求使用单链表。
// 程序中有3处错误的地方，有标识，属于逻辑错误，对照书中的代码仔细分析后，
// 要求同学们修改错误的代码，上机调试并得到正确的运行结果。

// 1.改正上述程序中的错误。
// 2.编写合并函数，将两个有序的单链表合并成一个有序单链表。
// 3.完成实验报告的撰写。

#include <stdio.h> /*该文件包含printf()等函数*/
#include <stdlib.h>/*该文件包含exit()等函数*/
#include <malloc.h>/*该文件包含malloc()等函数*/

typedef int DataType; /*定义DataType为int*/

typedef struct Node
{
    DataType data;
    struct Node *next;
} SLNode;

void ListInitiate(SLNode **head) /*初始化*/
{
    /*如果有内存空间，申请头结点空间并使头指针head指向头结点*/
    if ((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL)
        exit(1);
    (*head)->next = NULL; /*置链尾标记NULL */
}

int ListLength(SLNode *head) /* 单链表的长度*/
{
    SLNode *p = head; /*p指向首元结点*/
    int size = 0;     /*size初始为0*/

    while (p->next != NULL) /*循环计数*/
    {
        p = p->next;
        size++;
    }
    return size;
}

int ListInsert(SLNode *head, int i, DataType x)
/*在带头结点的单链表head的数据元素ai（0 ≤ i ≤ size）结点前*/
/*插入一个存放数据元素x的结点*/
{
    SLNode *p, *q;
    int j;

    p = head; /*p指向首元结点*/
    j = -1;   /*j初始为-1*/
    while (p->next != NULL && j < i - 1)
    /*最终让指针p指向数据元素ai-1结点*/
    {
        p = p->next;
        j++;
    }

    if (j != i - 1)
    {
        printf("插入位置参数错！");
        return 0;
    }

    /*生成新结点由指针q指示*/
    if ((q = (SLNode *)malloc(sizeof(SLNode))) == NULL)
        exit(1);
    q->data = x;

    //此段程序有一处错误
    q->next = p->next; /*给指针q->next赋值*/
    p->next = q;       /*给指针p->next重新赋值*/
    return 1;
}

int ListDelete(SLNode *head, int i, DataType *x)
/*删除带头结点的单链表head的数据元素ai（0 ≤ i ≤ size - 1）结点*/
/*删除结点的数据元素域值由x带回。删除成功时返回1；失败返回0*/
{
    SLNode *p, *s;
    int j;

    p = head; /*p指向首元结点*/
    j = -1;   /*j初始为-1*/
    while (p->next != NULL && p->next->next != NULL && j < i - 1)
    /*最终让指针p指向数据元素ai-1结点*/
    {
        p = p->next;
        j++;
    }

    if (j != i - 1)
    {
        printf("删除位置参数错！");
        return 0;
    }

    //此段程序有一处错误
    s = p->next;       /*指针s指向数据元素ai结点*/
    *x = s->data;      /*把指针s所指结点的数据元素域值赋予x*/
    p->next = s->next; /*把数据元素ai结点从单链表中删除*/
    free(s);           /*释放指针s所指结点的内存空间*/
    return 1;
}

int ListGet(SLNode *head, int i, DataType *x)
/*取数据元素ai和删除函数类同，只是不删除数据元素ai结点*/
{
    SLNode *p;
    int j;

    p = head;
    j = -1;
    while (p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }

    if (j != i)
    {
        printf("取元素位置参数错！");
        return 0;
    }

    //此段程序有一处错误
    *x = p->data;
    return 1;
}

void Destroy(SLNode **head)
{
    SLNode *p, *p1;

    p = *head;
    while (p != NULL)
    {
        p1 = p;
        p = p->next;
        free(p1);
    }
    *head = NULL;
}

void MergeList_L(SLNode *La, SLNode *Lb, SLNode **Lc)
{
    SLNode *pa = La->next;
    SLNode *pb = Lb->next;
    SLNode *pc = La;
    *Lc = La;

    while (pa && pb)
    {
        if (pa->data <= pb->data)
        {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }
        else
        {
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }

    pc->next = pa ? pa : pb;
    free(Lb);
}

// 打印函数
void print(SLNode *p)
{
    int i, x;
    for (i = 0; i < ListLength(p); i++)
    {
        if (ListGet(p, i, &x) == 0) /*取元素*/
        {
            printf("错误! \n");
            return;
        }
        else
            printf("%d    ", x); /*显示数据元素*/
    }
    printf("\n");
}

void main(void)
{
    // 链表La
    SLNode *La;
    // 初始化La
    ListInitiate(&La);
    ListInsert(La, 0, 1);
    ListInsert(La, 1, 3);
    ListInsert(La, 2, 5);

    // 链表Lb
    SLNode *Lb;
    // 初始化Lb
    ListInitiate(&Lb);
    ListInsert(Lb, 0, 2);
    ListInsert(Lb, 1, 4);
    ListInsert(Lb, 2, 6);
    ListInsert(Lb, 3, 8);

    // 链表Lc
    SLNode *Lc;
    // 初始化La
    ListInitiate(&Lc);

    printf("La:\n");
    print(La);
    printf("Lb:\n");

    print(Lb);

    // 合并La,Lb为Lc
    MergeList_L(La, Lb, &Lc);
    printf("合并后Lc:\n");
    print(Lc);

    // 释放内存
    Destroy(&Lc);

    printf("\n");
    system("pause");
}