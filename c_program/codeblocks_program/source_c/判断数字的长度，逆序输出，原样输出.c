/*题目描述
给出一个不多于5位的整数，要求 1、求出它是几位数 2、分别输出每一位数字 3、按逆序输出各位数字，例如原数为321,应输出123
输入
一个不大于5位的数字
输出
三行 第一行 位数 第二行 用空格分开的每个数字，注意最后一个数字后没有空格 第三行 按逆序输出这个数
样例输入
12345
样例输出
5
1 2 3 4 5
54321*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,j,a1,a2;
    int i=0;
    scanf("%d",&n);
    a2=n;
    do
    {
        a2/=10;
        i++;
    }while(a2!=0);
    printf("%d\n",i);
    int size[i];
    for(j=0;j<i;j++)
    {
        size[j]=n%10;
        n=n/10;
    }
    for(j=i-1;j>-1;j--)
    {
        printf("%d ",size[j]);
    }
    printf("\n");
    for(j=i-1;j>-1;j--)
    {
        printf("%d",j+1);
    }
    return 0;
}
