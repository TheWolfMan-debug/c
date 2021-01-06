/*题目描述
输入两个正整数m和n，求其最大公约数和最小公倍数。
输入
两个整数
输出
最大公约数，最小公倍数
样例输入
5 7
样例输出
1 35*/

#include <stdio.h>
int main()
{
    int m,n,a,b;
    int i,temp;
    scanf("%d %d",&m,&n);
    a=m,b=n;
    do
    {
        temp=m%n;
        m=n;
        n=temp;
    }while(temp!=0);
    printf("%d ",m);
    for(i=1; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
