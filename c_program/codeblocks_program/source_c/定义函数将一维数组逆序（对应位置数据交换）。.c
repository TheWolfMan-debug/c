/*定义函数将一维数组逆序（对应位置数据交换）。
主函数中输入10个整数，然后调用函数将其逆序并输出逆序后的结果。
输入提示："input 10 numbers:"
输入格式："%d"
输出格式："%5d"

程序运行结果示例：
input 10 numbers: 5 8 7 6 5 4 2 8 0 9
   9    0    8    2    4    5    6    7    8    5*/

#include <stdio.h>
#define N 10
int main()
{
    int a[N];
    int i;
    printf("input 10 numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=N-1;i>-1;i--)
    {
        printf("%5d",a[i]);
    }
    return 0;
}
