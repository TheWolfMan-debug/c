#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,x,count=0,a[10],i;
	printf("Please enter the number:\n");
    scanf("%d",&n);
    x=fabs(n);//Ϊ�����������Լ������ĳ��ֶ������ľ���ֵ��ֵ
    for(i=0;i<=9;i++) //��ʼ������
		a[i]=0;
    while(x!=0)//�����ѭ����Ϊ���ж��������ݵ�λ��
    {
        for(i=0;i<=9;i++)//�ڲ�ѭ����Ϊ�˼���ÿ��λ���������ֵĴ���
        {
            if (x%10==i)
				a[i]++;
        }
		x/=10;
        count++;
    }
	printf("%d: %d bits\n",n,count);
    for(i=0;i<=9;i++)//ѭ�������ӡ
    {
        if (a[i] != 0)//ɸѡ���
			printf("%d: %d\n",i,a[i]);
    }

	system("pause");
	return 0;
}
