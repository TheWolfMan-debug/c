#include <stdio.h>
#include <stdlib.h>
#define N 100

//输入数组
int input(int p[N][2])
{
    int i = 0, j = 0, n = 0;
    do
    {
        scanf("%d%d", &p[i][0], &p[i][1]);
        i++;
        n++;
    } while (p[i - 1][0] != 0);
    return n;
}

//重组数组
// 输入：数组一：(1,2) (1,2) (1,2) (0,1) 数组二:(1,2) (0,1)
// 重组数组一后：(1,6) (0,1)
int restruct(int p[N][2], int n)
{
    int i, j, k, l;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n-1; j++)
        {
            if (p[i][0] == p[j][0])
            {
                p[i][1] += p[j][1];
                for (k = j; k < n - 1; k++)
                {
                    p[k][0] = p[k + 1][0];
                    p[k][1] = p[k + 1][1];
                }
                n--;
                i--;
            }
        }
    }
    return n;
}

//对结果数组进行排序
void toOrder(int p[N][2], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (p[i][0] < p[j][0])
            {
                temp = p[i][0];
                p[i][0] = p[j][0];
                p[j][0] = temp;

                temp = p[i][1];
                p[i][1] = p[j][1];
                p[j][1] = temp;
            }
        }
    }
}

//进行两个数组的操作(主要部分)
int judge(int p1[N][2], int p2[N][2], int n1, int n2, int p3[N][2])
{
    int i, j, n = 0, flag1, flag2;
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (p1[i][0] == p2[j][0])
            {
                p3[n][1] = p3[n][1] + p2[j][1];
            }
        }

        p3[n][0] = p1[i][0];
        p3[n][1] = p3[n][1] + p1[i][1];
        n++;
    }
    for (i = 0; i < n2; i++)
    {
        flag2 = 1;
        for (j = 0; j < n1; j++)
        {
            if (p2[i][0] == p1[j][0])
            {
                flag2 = 0;
                break;
            }
        }
        if (flag2)
        {
            p3[n][0] = p2[i][0];
            p3[n][1] = p2[i][1];
            n++;
        }
    }
    return n;
}

//打印最后结果
void print(int p[N][2], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (p[i][0] == 1)
        {
            printf("%dx+", p[i][1]);
        }
        else
        {
            printf("%dx%d+", p[i][1], p[i][0]);
        }
    }
    printf("%d\n", p[i][1]);
}

//打印测试数组
void printP(int p[N][2], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("%d %d\n", p[i][0], p[i][1]);
    }
}

int main()
{
    int p1[N][2] = {0}, p2[N][2] = {0}, p3[N][2] = {0}, n1, n2, n3;

    //输入
    n1 = input(p1);

    //打印输入数组的行数
    printf("n1=%d\n", n1);
    printf("------------------\n");

    //将数组中重复的部分进行组合
    n1 = restruct(p1, n1);

    //打印重组后的数组
    printP(p1, n1);
    printf("------------------\n");

    //打印重组后的数组行数
    printf("n1=%d\n", n1);
    printf("------------------\n");

    //输入第二个数组
    n2 = input(p2);
    printf("n2=%d\n", n2);
    printf("------------------\n");

    //计算过程
    n3 = judge(p1, p2, n1, n2, p3);

    //打印计算后的数组行数
    printf("n3=%d\n", n3);

    //对结果数组进行排序
    toOrder(p3, n3);

    //打印结果数组
    printf("-----------------\n");
    printP(p3, n3);

    //打印最后结果
    printf("-----------------\n");
    print(p3, n3);

    system("pause");
    return 0;
}