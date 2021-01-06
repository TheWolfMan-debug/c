/*编写程序对4行4列二维数组的每一行排序，偶数行（0当作偶数）由小到大排序，奇数行由大到小排序。
函数原型：void sort(int a[][N])；
主函数实现功能：对定义数组的输入及输出；
**输入格式："%d"
**输出格式："%3d"（提醒：每行后面有回车）
程序测试用例：
2 6 4 5↙
4 5 3 6↙
0 4 8 2↙
1 3 3 2↙
  2  4  5  6↙
  6  5  4  3↙
  0  2  4  8↙
  3  3  2  1↙*/

#include <stdio.h>
#define M 4
#define N 4

void sort(int a[][N]);

int main()
{
    int a[M][N];
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sort(a);
    return 0;
}

void sort(int a[][N])
{
    int i,j,k,temp;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(i%2!=0)
            {
            for(k=j+1;k<N;k++)
            {
                if(a[i][j]<a[i][k])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
            }
            else
            {
            for(k=j+1;k<N;k++)
            {
                if(a[i][j]>a[i][k])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][j];
                    a[i][j]=temp;
                }
            }
            }
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
