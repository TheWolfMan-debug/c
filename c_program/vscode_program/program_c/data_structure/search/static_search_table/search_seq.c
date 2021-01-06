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

// 数值类型
#define KeyType int

// 数值型的比较
#define EQ(a, b) ((a) == (b))
#define LT(a, b) ((a) < (b))
#define LQ(a, b) ((a) <= (b))
// 字符型的比较
// #define EQ(a,b) (!strcmp((a),(b))
// #define LT(a,b) (strcmp((a),(b)<0)
// #define LQ(a,b) (strcmp((a),(b)>0)

typedef struct
{
    KeyType key;
} SElemType;

#define ElemType SElemType

typedef struct
{
    ElemType *elem;
    // 实际存储元素的数量
    int length;
} SSTable;

// 创建一个含有n个数据的静态查找表ST
void Create(SSTable *ST,int n) 
{
    // 实际存储的数量
    ST->length = n;
    // 申请空间比实际存储大一个单元，零位留空
    ST->elem = (ElemType *)malloc(sizeof(ElemType) * (ST->length + 1));
    KeyType i;
    for (i = 1; i < ST->length; i++)
    {
        ST->elem[i].key = i;
    }
}

// 顺序查找
int Search_Seq(SSTable ST, KeyType key)
{
    int i;
    ST.elem[0].key = key;
    for (i = ST.length; !EQ(ST.elem[i].key, key); --i)
        ;
    return i;
}

int main()
{
    SSTable ST;
    int n = 10;
    Create(&ST,n);

    KeyType key = 5;
    printf("%d",Search_Seq(ST, key));

    putchar('\n');
    system("pause");
    return 0;
}

