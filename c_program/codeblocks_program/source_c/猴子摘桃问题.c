/*���ӳ��ҳ���_��չ2
���ӵ�һ��ժ�����ɸ����ӣ�����һ�룬����񫣬�ֶ����1�����ڶ������Ͻ�ʣ��������ֳԵ�һ�룬�����ֶ����1����
�˺�ÿ�춼�ǳԵ�ǰһ��ʣ�µ�һ����һ��������n�������ʱ������ֻʣ��1�����ӣ��ʵ�һ����ժ�˶������ӣ�
Ϊ�˼�ǿ�����ԣ����û����벻ͬ������n���е��ƣ��������n���������Ϊ1��
ͬʱ��Ҫ���Ӷ��û��������ݵĺϷ�����֤����:�����������������0�͸�����

�������н��ʾ����
Input days:
0�L
Input days:
-5�L
Input days:
a�L
Input days:
3�L
x=10

�����ʽ:"%d"
�����ʽ��
������ʾ��Ϣ��"Input days:\n"
�����"x=%d\n"*/
#include <stdio.h>

int monkey(int n);

int main()
{
    int n,ret;
    do{
        printf("Input days:\n");
        ret=scanf("%d",&n);
        while(ret!=1)
        {
            while(getchar()!='\n')  //���д����������������������
            printf("Input days:\n");
            ret=scanf("%d",&n);
        }
    }while(ret&&n<=0);
    printf("x=%d\n",monkey(n));
    return 0;
}
int monkey (int n)
{
    int i,j=1;
    for(i=1;i<n;i++)
    {
        j=2*(j+1);
    }
    return j;
}
