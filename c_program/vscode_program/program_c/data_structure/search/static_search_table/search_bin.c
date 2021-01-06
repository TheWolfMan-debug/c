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
void Create(SSTable *ST, int n)
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

// 折半查找
int Search_Bin(SSTable ST, KeyType key)
{
    // 再有续表ST中折半查找其关键字等于key的数据元素。
    // 若找到，函数值为该元素在在表中的位置，否则为零
    int low = 1;
    int high = ST.length;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (EQ(key, ST.elem[mid].key))
        {
            return mid;
        }
        else if (LT(key, ST.elem[mid].key))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{
    SSTable ST;
    int n = 1000;
    KeyType key = 1001;
    Create(&ST, n);
    if (Search_Bin(ST,key)==0)
    {
        printf("Not found!!!!\n");
    }
    else
    {
        printf("%d\n",Search_Bin(ST,key));
    }
    
    system("pause");
    return 0;
}
