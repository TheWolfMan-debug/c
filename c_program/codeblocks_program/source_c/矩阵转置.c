/*输入一个正整数n (1＜n≤6)，根据下式生成1个n*n的方阵（二维数组存放）：
a[i][j] = i * n + j + 1（0≤i≤n-1，0≤j≤n-1）
然后将该方阵转置（行列互换）后输出。
注意：原方阵和转置方阵用同一个二维数组存放。
**输入格式要求："%d" 提示信息："Enter n: "
**输出格式要求："%4d"
对矩阵的输出要求：列与列之间为%4d，行与行之间为\n
程序运行示例如下：
Enter n: 3
   1   4   7
   2   5   8
   3   6   9
*/

#include <stdio.h>

#define N 6

int createarray(int n,int oldarray[N][N]);
int newarray(int n,int oldarray[N][N]);

int main()
{
    int n;//矩阵的边长
    int oldarray[N][N];
    printf("Enter n: ");//提示语句
    scanf("%d",&n);
    createarray(n,oldarray);
    newarray(n,oldarray);
    return 0;
}

int createarray(int n,int oldarray[N][N])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            oldarray[i][j] = i * n + j + 1;
        }
    }
    return 0;
}

int newarray(int n,int oldarray[N][N])
{
    int i,j;
    int a;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            a=oldarray[i][j];
            oldarray[i][j]=oldarray[j][i];
            oldarray[j][i]=a;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",oldarray[i][j]);
        }
        printf("\n");
    }
}

//
