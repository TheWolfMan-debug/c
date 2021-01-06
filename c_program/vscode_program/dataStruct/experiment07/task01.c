#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef int KeyType;

typedef struct
{
    KeyType key;
} SeqList;

int SeqSearch(SeqList R[], int n, KeyType k)
{
    int i = 0;
    while (i < n && R[i].key != k)
    {
        printf("%d ", R[i].key);
        i++;
    }
    printf("\n");
    if (i >= n)
        return -1;
    else
    {
        printf("此元素为：");
        printf("%d\n", R[i].key);
        return i;
    }
}

void Init(SeqList R[])
{
    R[0].key = 9;
    R[1].key = 13;
    R[2].key = 15;
    R[3].key = 7;
    R[4].key = 45;
    R[5].key = 32;
    R[6].key = 56;
    R[7].key = 89;
    R[8].key = 60;
    R[9].key = 36;
}

int main(int argc, char const *argv[])
{
    SeqList R[10];
    int k;
    int Index;
    Init(R);
    while (1)
    {
        printf("输入要查找的元素：");
        scanf("%d", &k);
        Index = SeqSearch(R, 10, k);
        if (Index != -1)
        {
            printf("下标为：%d\n", Index);
        }
        else
        {
            printf("没有此元素\n");
        }
        printf("------------------\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
