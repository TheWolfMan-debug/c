/*从键盘为3*3的矩阵输入数据，找出主对角线上最大的元素，以及所在的行号。
**输入格式要求："%d"
**输出格式要求："max=%d ,row=%d"
程序的运行示例如下：
1 2 3
4 5 6
7 8 9
max=9 ,row=2*/

/*#include <stdio.h>

int main()
{
    int n=3;
    int a[n][n];
    int i,j;
    int max=0;
    int row=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<n;i++)
    {
        if(max<a[i][i])
        {
            max=a[i][i];
            row=i;
        }
    }
    printf("max=%d ,row=%d",max,row);
    return 0;
}*/
#include <stdio.h>

int main()
{
    int n=10;
    int a[n];
    int i;
    int max=0;
    int row=0;
    int min=0;
    int pos=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            row=i;
        }
        if(min>a[i])
        {
            min=a[i];
            pos=i;
        }
    }
    printf("max=%d, pos=%d\n",max,row);
    printf("min=%d, pos=%d\n",min,pos);
    return 0;
}
