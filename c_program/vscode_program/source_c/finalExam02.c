//  编程判断3*3的二维数组是否存在鞍点；如果存在鞍点请输出该值及其在数组中的下标值（X,Y）.
// 鞍点即是在这个二维数组中，某一个位置上的元素在该行上最大，该列上最小。
// 程序运行示例1：
// 请输入二维数组:
// 9 8 3
// 6 3 4
// 4 3 2
// 该二维数组的鞍点为4:下标为（2,0).

// 程序运行示例2：
// 请输入二维数组:
// 4 5 7
// 3 8 5
// 6 9 4
// 该二维数组中没有鞍点.

// 输入3*3的二维数组提示信息："请输入二维数组:\n"
// 输入格式：%d
// 存在鞍点输出格式："该二维数组的鞍点为%d:下标为（%d,%d).\n"
// 不存在鞍点输出提示："该二维数组中没有鞍点.\n"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define N 3

int main()
{
    int array[N][N], i, j, max, min, k, flag,pos;
    printf("请输入二维数组:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {

        flag = 1;
        max = array[i][0];
        pos = 0;
        for (k = 1; k < N; k++)
        {
            if (max < array[i][k])
            {
                max = array[i][k];
                pos = k;
            }
        }
        for (k = 0; k < N; k++)
        {
            if (max > array[k][pos])
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("该二维数组的鞍点为%d:下标为（%d,%d).\n", max, i, pos);
            break;
        }
    }

    if (flag == 0)
    {
        printf("该二维数组中没有鞍点.\n");
    }

    system("pause");
    return 0;
}