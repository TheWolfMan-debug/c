/*��Ŀ����
��Sn=1!+2!+3!+4!+5!+��+n!ֵ֮������n��һ������(n������20)��
����
n
���
Sn��ֵ
��������
5
�������
153*/

#include <stdio.h>

int main()
{
    long int i,j,sum=0,num;
    int n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        num=1;
        for(i=1;i<=j;i++)
        {
            num*=i;
        }
        sum+=num;
    }
    printf("%ld",sum);
    return 0;
}
