#include <stdio.h>
#define N 10
void Transpose(int (*a)[N], int n);
void  Swap(int *x, int *y);
void InputMatrix(int (*a)[N], int n);
void PrintMatrix(int (*a)[N], int n);

int main()
{
    int a[N][N],n;
    printf("Input n:");
    scanf("%d",&n);
    InputMatrix(a,n);
    Transpose(a,n);
    printf("The transposed matrix is:\n");
    PrintMatrix(a,n);
    return 0;
}
void InputMatrix(int (*a)[N], int n)
{
    int i,j;
    printf("Input %d*%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",*(a+i)+j);
        }
    }
}
void Transpose(int (*a)[N], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                Swap(*(a+i)+j,*(a+j)+i);
            }
        }
    }
}
void  Swap(int *x, int *y)
{
    int temp=NULL;
    temp=*x;
    *x=*y;
    *y=temp;
}
void PrintMatrix(int (*a)[N], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
}
/*�����º���ԭ�ͱ�̼��㲢���n��n�׾����ת�þ������У�n���û��Ӽ������롣��֪nֵ������10��
void Transpose(int (*a)[N], int n);
void  Swap(int *x, int *y);
void InputMatrix(int (*a)[N], int n);
void PrintMatrix(int (*a)[N], int n);
������ʾ��Ϣ��"Input n:"
�����ʽ��"%d"
������ʾ��Ϣ��"Input %d*%d matrix:\n"
�����ʾ��Ϣ��"The transposed matrix is:\n"
�����ʽ��"%d\t"*/
