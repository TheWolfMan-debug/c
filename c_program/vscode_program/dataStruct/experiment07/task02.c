#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int KeyType;

typedef struct
{
    KeyType key;
} SeqList;

int BinSearch(SeqList R[], int n, KeyType k)
{
    int low = 0, high = n - 1, mid, count = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("第%d次查找：在[%d ,%d]中找到元素R[%d]:%d\n", ++count, low, high, mid, R[mid].key);
        if (R[mid].key == k)
            return mid;
        if (R[mid].key > k)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

void Init(SeqList R[])
{
    R[0].key = 5;
    R[1].key = 7;
    R[2].key = 9;
    R[3].key = 12;
    R[4].key = 18;
    R[5].key = 20;
    R[6].key = 22;
    R[7].key = 25;
    R[8].key = 30;
    R[9].key = 100;
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
        Index = BinSearch(R, 10, k);
        if (Index != -1)
        {
            printf("下标为：%d\n", Index);
        }
        else
        {
            printf("没有此元素\n");
        }
        printf("-------------\n");
    }
    printf("\n");
    system("pause");
    return 0;

    return 0;
}
