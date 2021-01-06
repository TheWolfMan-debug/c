/*编程实现两个数组中对应该元素值的交换（数组的长度定义成5）。
输出函数："%5d"
输入举例:注意输入的顺序
6 7 8 9 10 （输入第一个数组元素）
1 2 3 4 5   （输入第二个数组元素）
输出举例：
1  2  3  4  5    （输入第一个数组元素）
6  7  8  9  10   （输入第二个数组元素）*/

#include <stdio.h>
#define N 3
int main()
{
    int a[N],b[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%5d",b[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%5d",a[i]);
    }
    return 0;
}
