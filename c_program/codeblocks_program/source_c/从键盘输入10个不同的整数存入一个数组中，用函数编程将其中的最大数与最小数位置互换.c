/*要求：从键盘输入10个不同的整数存入一个数组中，用函数编程将其中的最大数与最小数位置互换，
分别输出互换之前最大值和最小值及其在数组中的位置,以及互换后的数组


输入提示信息："Input 10 numbers:"
输入格式："%d"
最大值输出提示信息："Max element position:%d,Max element:%d\n"
最小值输出提示信息："Min element position:%d,Min element:%d\n"
数组输出提示信息："Exchange results:"
数组输出格式："%4d"
程序运行结果示例：
Input 10 numbers:5 1 6 4 3 6 10 4 7 9
Max element position:6,Max element:10↙
Min element position:1,Min element:1↙*/

#include <stdio.h>
#define N 10

int main()
{
    int i,temp,a[N],max,min,maxf,minf;
    printf("Input 10 numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0],min=a[0];
    maxf=0,minf=0;
    for(i=0;i<N;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            maxf=i;
        }
        if(min>a[i])
        {
            min=a[i];
            minf=i;
        }
    }
    temp=a[minf];
    a[minf]=a[maxf];
    a[maxf]=temp;
    printf("Max element position:%d,Max element:%d\n",maxf,max);
    printf("Min element position:%d,Min element:%d\n",minf,min);
    printf("Exchange results:");
    for(i=0;i<N;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
