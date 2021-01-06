#include <stdio.h>
#define N 10
#define M 10
void Transpose(int (*a)[N], int (*at)[M], int m, int n);
void InputMatrix(int (*a)[N], int m, int n);
void PrintMatrix(int (*at)[M], int n, int m);
int main()
{
    int m,n;
    printf("Input m, n:");
    scanf("%d,%d",&m,&n);
    int a[M][N],at[m][n];
    printf("Input %d*%d matrix:\n",m,n);
    InputMatrix(a, m, n);
    printf("The transposed matrix is:\n");
    Transpose(a,at,m,n);
    PrintMatrix(at, n, m);
    return 0;
}
void InputMatrix(int (*a)[N], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
}
void Transpose(int (*a)[N], int (*at)[M], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(at+j)+i)=*(*(a+i)+j);
        }
    }
}
void PrintMatrix(int (*at)[M], int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",*(*(at+i)+j));
        }
        printf("\n");
    }
}






/*用指向一维数组的指针变量即二维数组的行指针作为函数参数，实现矩阵转置。按如下函数原型编程计算并输出m×n阶矩阵的转置矩阵。其中，m和n的值由用户从键盘输入。已知m和n的值都不超过10。

void Transpose(int (*a)[N], int (*at)[M], int m, int n);
void InputMatrix(int (*a)[N], int m, int n);
void PrintMatrix(int (*at)[M], int n, int m);
输入提示信息："Input m, n:"
输入格式："%d,%d"
输入提示信息："Input %d*%d matrix:\n"
输出提示信息和格式："The transposed matrix is:\n"
输出格式："%d\t"


程序测试用例：
Input m, n:3,4
Input 3*4 matrix:
1 2 3 4
5 6 7 8
9 10 11 12
The transposed matrix is:
1	5	9
2	6	10
3	7	11
4	8	12*/
