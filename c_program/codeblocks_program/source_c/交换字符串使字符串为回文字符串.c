/*问题 1467: [蓝桥杯][基础练习VIP]完美的代价
时间限制: 1Sec 内存限制: 128MB 提交: 1003 解决: 323
题目描述
回文串，是一种特殊的字符串，它从左往右读和从右往左读是一样的。
小龙龙认为回文串才是完美的。现在给你一个串，它不一定是回文的，
请你计算最少的交换次数使得该串变成一个完美的回文串。

交换的定义是：交换两个相邻的字符

例如mamad

第一次交换  ad  :  mamda

第二次交换  md  :  madma

第三次交换  ma  :  madam  (回文！完美！)

输入
第一行是一个整数N，表示接下来的字符串的长度(N  < =  8000)

第二行是一个字符串，长度为N.只包含小写字母
输出
如果可能，输出最少的交换次数。

否则输出Impossible
样例输入
5

mamad
样例输出
3*/

#include <stdio.h>
#include <string.h>
#define N 8000

int main()
{
    char a[N];
    int n,i,j,flag,count[N]={0};
    scanf("%d",&n);
    getchar();
    gets(a);
    for(i=0;i<n;i++)
    {
        //printf("%d",count[i]);
        count[a[i]-97]++;
    }
    for(i=0;i<('a'-'b');i++)
    {
        flag=1;
        //printf("%d",count[i]);
        if(count[a[i]-97]%2==1)
        {
            flag=0;
            printf("Impossible");
            break;
        }
        printf("%3d",count[a[i]-97]);
    }
    if(flag)
    {

    }
    return 0;
}
