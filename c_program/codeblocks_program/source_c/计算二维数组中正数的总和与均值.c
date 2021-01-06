#include<stdio.h>
#define N 10
void InputArray(int a[][N], int m, int n);
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean);
/*�Ӽ�������һ��m��n�еĶ�ά����*/
void InputArray(int a[][N], int m, int n)
{
    int i, j;
    printf("Input elements of %d*%d array:\n", m, n);
    for (i = 0; i < m; i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
}
int main()
{
    int m, n, iSum;//iSum���ڱ����ά����a���������ܺ�
    float fMean;   //fMean���ڱ����ά����a�������ľ�ֵ
    int a[N][N];

    printf("Input size of 2-D array m,n:\n");
    scanf("%d,%d", &m, &n);
    InputArray(a,m,n);
    CalSumAndMean(a,m,n,&iSum,&fMean);
    printf("sum=%d, mean=%.2f\n", iSum, fMean);
    return 0;
}
/*���ܣ�����m��n�еĶ�ά����a���������ܺ����ֵ
������int *sum ���ڽ��ն�ά����a���������ܺ�
      float *mean ���ڽ��ն�ά����a�������ľ�ֵ
*/
void CalSumAndMean(int a[][N], int m, int n, int *sum, float *mean)
{
    int i, j,count;
    count = 0;
    *sum=0;
    *mean=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>0)
            {
                *sum+=a[i][j];
                count++;
            }
        }
    }
    *mean=(float)*sum/count;
}
