/* 问题 1199: 哥德巴赫曾猜测

时间限制: 1Sec 内存限制: 128MB 提交: 1503 解决: 815

题目描述
德国数学家哥德巴赫曾猜测：任何大于6的偶数都可以分解成两个素数（素数对）的和。
但有些偶数可以分解成多种素数对的和，
如： 10=3+7，10=5+5，即10可以分解成两种不同的素数对

输入
输入任意的>6的正偶数(<32767)

输出
试求给出的偶数可以分解成多少种不同的素数对（注： A+B与B+A认为是相同素数对）

样例输入
1234
样例输出
25 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    int flag = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,i,count=0;
    // printf("Input the n:\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(isPrime(i)&&isPrime(n-i))
        {
            printf("n=%d+%d\n",i,n-i);
            count++;
        }
    }
    printf("%d\n",count);
    system("pause");
    return 0;
}
