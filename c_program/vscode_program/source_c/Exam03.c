/*  编程从键盘输入一个m行n列的二维数组，然后根据输入mode值将数组进行水平翻转，
垂直翻转或转置操作。其中数组行列数m，n，操作方式mode的值由用户键盘输入。
已知m和n的值都不超过10，mode=0时水平翻转数组，mode=1时垂直翻转数组，mode =2时
转置数组。
程序运行结果示例1：
Input m,n:↙
3,4
Input 3*4 array:↙
1 3 5 7
2 4 6 8
3 6 9 1
Input operation mode:↙
0
After operation:↙
   7   5   3   1↙
   8   6   4   2↙
   1   9   6   3↙
程序运行结果示例2：
Input m,n:↙
3,4
Input 3*4 array:↙
1 3 5 7
2 4 6 8
3 6 9 1
Input operation mode:↙
1
After operation:↙
   3   6   9   1↙
   2   4   6   8↙
   1   3   5   7↙
程序运行结果示例3：
Input m,n:↙
3,4
Input 3*4 array:↙
1 3 5 7
2 4 6 8
3 6 9 1
Input operation mode:↙
2
After operation:↙
   1   2   3↙
   3   4   6↙
   5   6   9↙
   7   8   1↙

输入格式:
输入数组大小："%d,%d"
输入数组元素："%d"
输入操作模式："%d"
输出格式：
数组大小输入提示信息："Input m,n:\n"
数组元素输入提示信息："Input %d*%d array:\n"
操作模式输入提示信息   "Input operation mode:\n"
操作后数组输出提示信息"After operation:\n"
数组输出格式：	       "%4d" */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define K 10

void change(int a[K][K], int x, int m, int n)
{
    int i, j;
    int temp;
    if (x == 1)
    {
        for (i = 0; i < m / 2; i++)
        {
            for (j = 0; j < n; j++)
            {
                temp = a[i][j];
                a[i][j] = a[m - i - 1][j];
                a[m - i - 1][j] = temp;
            }
        }
    }
    else if (x == 0)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n / 2; j++)
            {
                temp = a[i][j];
                a[i][j] = a[i][n - j - 1];
                a[i][n - j - 1] = temp;
            }
        }
    }
    else if (x == 2)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j <= i; j++)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
}

int main()
{
    int a[K][K];
    int i, j, x, m, n;
    printf("Input m,n:\n");
    scanf("%d,%d", &m, &n);
    printf("Input %d*%d array:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    getchar();

    printf("Input operation mode:\n");
    scanf("%d", &x);
    change(a, x, m, n);

    printf("After operation:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
