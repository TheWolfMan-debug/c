/*有一个3*4的矩阵，求其中的最大元素的值。

**输入提示："请输入3*4矩阵：\n"
**输入格式："%d"
**输出格式要求："max value is %d\n"

程序运行示例如下：
请输入3*4矩阵：
1 3 5 7
2 4 6 8
15 17 34 12
max value is 34*/
#include <stdio.h>
#define N 3
#define M 4

int main()
{
    int i,a[N*M];
    int max;
    printf("请输入3*4矩阵：\n");
    for(i=0;i<N*M;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<N*M;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("max value is %d\n",max);
    return 0;
}
