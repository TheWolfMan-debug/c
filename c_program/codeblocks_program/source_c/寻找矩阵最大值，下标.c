/*��Ŀ����
����һ��������n (1�� n ��6),������һ��n ��n�еľ����ҳ��þ����о���ֵ����Ԫ���Լ��������±�����±ꡣ
����
n
nxn
���
�� �� ��
��������
2
1 2
3 4
�������
4 2 2*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i1,i2,max,j=0,k=0;
    scanf("%d",&n);
    int a[n][n];
    for(i1=0;i1<n;i1++)
    {
        for(i2=0;i2<n;i2++)
        {
            scanf("%d",&a[i1][i2]);
        }
    }
    max=a[0][0];
    for(i1=0;i1<n;i1++)
    {
        for(i2=0;i2<n;i2++)
        {
            if(fabs(max)<fabs(a[i1][i2]))
            {
                max=a[i1][i2];
                j=i1+1;
                k=i2+1;
            }
        }
    }
    printf("%d %d %d",max,j,k);
}
