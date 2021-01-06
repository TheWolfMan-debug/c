/* 题目 1157: [亲和数]

时间限制: 1Sec 内存限制: 128MB 提交: 5230 解决: 2754

题目描述
古希腊数学家毕达哥拉斯在自然数研究中发现，220的所有真约数(即不是自身的约数)之和为：

1+2+4+5+10+11+20+22+44+55+110＝284。

而284的所有真约数为1、2、4、71、 142，加起来恰好为220。人们对这样的数感到很惊奇，并称之为亲和数。一般地讲，
如果两个数中任何一个数都是另一个数的真约数之和，则这两个数就是亲和数。
你的任务就编写一个程序，判断给定的两个数是否是亲和数

输入
输入数据第一行包含一个数M，接下有M行，每行一个实例,包含两个整数A,B； 其中 0 ＜＝A,B ＜＝600000 ;

输出
对于每个测试实例，如果A和B是亲和数的话输出YES，否则输出NO。

样例输入
2
220 284
100 200
样例输出
YES
NO */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define N 100

int sum(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int i, isKind[N], n, num1, num2;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &num1, &num2);
        if (sum(num1) == num2 && sum(num2) == num1)
        {
            isKind[i] = 1;
        }
        else
        {
            isKind[i] = 0;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (isKind[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    system("pause");
    return 0;
}
