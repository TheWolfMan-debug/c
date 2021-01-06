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

/*����˷�����дһ��C����ʵ��M��K�о�����K��N�еľ���ĳ˻�����AΪM��K�еľ���BΪK��N�еľ�����C=A��B�Ļ�ΪM��N�еľ���
���У�MΪ2��KΪ3��NΪ2.
����˷��Ĺ����ǣ���A[m,k]��B[k,n]����C[m,n]=A[m,k]��B[k,n]�����У�
C[i,j]=��kl=1A[i,l]��B[l,j], (i=1,2,��,m   j=1,2,��,n)
**������ʾ��"���������A��"       "���������B��"
**�����ʽ��"%d"
**�����ʽҪ��"array C=\n"    "\t%d"

��������ʾ�����£�
���������A���L
1 2 3
4 5 6
���������B���L
1 2
1 2
1 2
array C=�L
	6	12�L
	15	30�L*/

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
    printf("���������A��");
    for (i = 0; i < M; i ++)
        for (j = 0; j < S; j ++)
            scanf("%d", &A[i][j]);
    printf("���������B��");
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

