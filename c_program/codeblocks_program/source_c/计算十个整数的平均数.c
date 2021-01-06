/*编写程序计算一个包含10个整数的数组中所有整数的平均值（平均值计算为双精度浮点数）。
在main函数中利用循环输入10个整数，保存在一个数组中，计算均值，然后输出计算结果。
***输入提示信息："Please input ten integers:\n"
***每个整数的输入格式要求："%d"
***输出格式要求："The mean value is %.2f\n"*/

#include <stdio.h>
#define N 10

int main()
{
    int a[N];
    double aver=0;
    int i;
    printf("Please input ten integers:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        aver+=a[i];
    }
    printf("The mean value is %.2f\n",aver/10);
    return 0;
}
