/*��Ŀ����
��������������m��n���������Լ������С��������
����
��������
���
���Լ������С������
��������
5 7
�������
1 35*/

#include <stdio.h>
int main()
{
    int m,n,a,b;
    int i,temp;
    scanf("%d %d",&m,&n);
    a=m,b=n;
    do
    {
        temp=m%n;
        m=n;
        n=temp;
    }while(temp!=0);
    printf("%d ",m);
    for(i=1; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
