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






/*��ָ��һά�����ָ���������ά�������ָ����Ϊ����������ʵ�־���ת�á������º���ԭ�ͱ�̼��㲢���m��n�׾����ת�þ������У�m��n��ֵ���û��Ӽ������롣��֪m��n��ֵ��������10��

void Transpose(int (*a)[N], int (*at)[M], int m, int n);
void InputMatrix(int (*a)[N], int m, int n);
void PrintMatrix(int (*at)[M], int n, int m);
������ʾ��Ϣ��"Input m, n:"
�����ʽ��"%d,%d"
������ʾ��Ϣ��"Input %d*%d matrix:\n"
�����ʾ��Ϣ�͸�ʽ��"The transposed matrix is:\n"
�����ʽ��"%d\t"


�������������
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
