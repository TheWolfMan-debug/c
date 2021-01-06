/* 问题 1127: [C语言训练]尼科彻斯定理

时间限制: 1Sec 内存限制: 128MB 提交: 2039 解决: 1016

题目描述

 验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。

输入
任一正整数

输出
该数的立方分解为一串连续奇数的和

样例输入
13
样例输出
13*13*13=2197=157+ 159+ 161+ 163 + 165 + 167 +   169   + 171+ 173+1 75+ 177+ 179+ 181 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, f;
    // printf("Input the n:\n");
    scanf("%d", &n);
    t = n * n * n;
    printf("%d*%d*%d=%d=", n, n, n, t);
    if (n % 2)
    {
        f = t / n - n / 2 * 2;
    }
    else
    {
        f = t / n - n / 2 * 2 + 1;
    }

    while (n - 1)
    {
        printf("%d+", f);
        f += 2;
        n--;
    }
    printf("%d", f);

    // putchar('\n');
    // system("pause");
    return 0;
}
