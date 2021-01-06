/*#include <stdio.h>
#define M 3
#define S 4
#define N 2

void multiply(int A[M][S], int B[S][N], int C[M][N])
{

    int ROW=M,COL=N,MID=S;
    int m;
    int sum;
    int i,j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			sum = 0;
			for (m = 0; m < MID; m++)
			{
				sum = sum + A[i][m] * B[m][j];
			}
			C[i][j] = sum;
		}
	}
}

int main()
{
    int i, j;
    int A[M][S], B[S][N], C[M][N]={0};
    printf("Please input A:\n");
    for (i = 0; i < M; i ++)
        for (j = 0; j < S; j ++)
            scanf("%d", &A[i][j]);
    printf("Please input B:\n");
    for (i = 0; i < S; i ++)
        for (j = 0; j < N; j ++)
            scanf("%d", &B[i][j]);
    multiply(A,B,C);
    printf("C=\n");
    for (i = 0; i < M; i ++){
        for (j = 0; j < N; j ++)
            {
                printf("%d ", C[i][j]);
            }
        printf("\n");
    }
    return 0;
}*/

/*矩阵乘法。编写一个C函数实现M行K列矩阵与K行N列的矩阵的乘积。设A为M行K列的矩阵，B为K行N列的矩阵，则C=A×B的积为M行N列的矩阵。
其中：M为2，K为3，N为2.
矩阵乘法的规则是：设A[m,k]，B[k,n]，则C[m,n]=A[m,k]×B[k,n]，其中：
C[i,j]=∑kl=1A[i,l]×B[l,j], (i=1,2,…,m   j=1,2,…,n)
**输入提示："请输入矩阵A："       "请输入矩阵B："
**输入格式："%d"
**输出格式要求："array C=\n"    "\t%d"

程序运行示例如下：
请输入矩阵A：↙
1 2 3
4 5 6
请输入矩阵B：↙
1 2
1 2
1 2
array C=↙
	6	12↙
	15	30↙*/

#include <stdio.h>
#define M 2
#define S 3
#define N 2

void multiply(int A[M][S], int B[S][N], int C[M][N])
{

    int ROW=M,COL=N,MID=S;
    int m;
    int sum;
    int i,j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			sum = 0;
			for (m = 0; m < MID; m++)
			{
				sum = sum + A[i][m] * B[m][j];
			}
			C[i][j] = sum;
		}
	}
}

int main()
{
    int i, j;
    int A[M][S], B[S][N], C[M][N]={0};
    printf("请输入矩阵A：");
    for (i = 0; i < M; i ++)
        for (j = 0; j < S; j ++)
            scanf("%d", &A[i][j]);
    printf("请输入矩阵B：");
    for (i = 0; i < S; i ++)
        for (j = 0; j < N; j ++)
            scanf("%d", &B[i][j]);
    multiply(A,B,C);
    printf("array C=\n" );
    for (i = 0; i < M; i ++){
        for (j = 0; j < N; j ++)
            {
                printf("\t%d ", C[i][j]);
            }
        printf("\n");
    }
    return 0;
}

