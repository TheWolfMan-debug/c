/*��д�����4��4�ж�ά�����ÿһ������ż���У�0����ż������С���������������ɴ�С����
����ԭ�ͣ�void sort(int a[][N])��
������ʵ�ֹ��ܣ��Զ�����������뼰�����
**�����ʽ��"%d"
**�����ʽ��"%3d"�����ѣ�ÿ�к����лس���
�������������
2 6 4 5�L
4 5 3 6�L
0 4 8 2�L
1 3 3 2�L
  2  4  5  6�L
  6  5  4  3�L
  0  2  4  8�L
  3  3  2  1�L*/

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
