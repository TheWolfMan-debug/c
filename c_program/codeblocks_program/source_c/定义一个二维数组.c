/*定义1个3 * 2的二维数组a，数组元素的值由下式给出，按矩阵的形式输出a。
a[i][j] = i + j (0<=i<=2, 0<=j<=1)
**输出格式要求："%4d"*/

/*#include <stdio.h>
#define N 3
#define M 2

int main()
{
    int a[N][M];
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            a[i][j]=i+j;
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int *p,*p1,i,a[10];
    p=a;
    p1=a;
    for(i=0;i<10;i++)
    {
        *p++=i;
    }
    for(i=0;i<10;i++)
    {
        printf("a[%d]=%d\n",i,*p1++);
    }
}
