/*��Ŀ����
һ�������ǡ�õ��ڲ�������������������֮�ͣ�������ͳ�Ϊ"����"�� ���磬6������Ϊ1��2��3����6=1+2+3�����6��"����"�� ������ҳ�N֮�ڵ��������������������ʽ���������
����
N
���
? its factors are ? ? ?
��������
1000
�������
6 its factors are 1 2 3
28 its factors are 1 2 4 7 14
496 its factors are 1 2 4 8 16 31 62 124 248 */

#include <stdio.h>

int main()
{
    int i,j,n,ret,sum;
    ret=scanf("%d",&n);
    if(!ret)
    {
        printf("? its factors are ? ? ?");
    }
    else
    {
        for(j=2;j<=n;j++)
        {
            sum=0;
            for(i=1;i<j;i++)
            {
                if(j%i==0)
                {
                    sum+=i;
                }
            }
            if(sum==j)
            {
                printf("%d its factors are ",j);
                for(i=1;i<j;i++)
                {
                    if(j%i==0)
                    {
                        printf(" %d",i);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
