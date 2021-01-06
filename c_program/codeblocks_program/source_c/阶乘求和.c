/*题目描述
求Sn=1!+2!+3!+4!+5!+…+n!之值，其中n是一个数字(n不超过20)。
输入
n
输出
Sn的值
样例输入
5
样例输出
153*/

#include <stdio.h>

int main()
{
    long int i,j,sum=0,num;
    int n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        num=1;
        for(i=1;i<=j;i++)
        {
            num*=i;
        }
        sum+=num;
    }
    printf("%ld",sum);
    return 0;
}
