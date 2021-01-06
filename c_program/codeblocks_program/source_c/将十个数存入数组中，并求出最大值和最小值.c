/*从键盘输入任意10个整数存入数组中，求出其中最大值和最小值的和,
并输出这个和。
**要求输入提示信息为：无输入提示信息
**要求输入格式为："%d"
**要求输出格式为："sum=%3d"*/

#include <stdio.h>
#define N 3

int main()
{
    int a[N],max,min;
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<N;i++)
    {
        max=(max<a[i]?a[i]:max);
        min=(min>a[i]?a[i]:min);
    }
    printf("sum=%3d",max+min);
    return 0;
}
