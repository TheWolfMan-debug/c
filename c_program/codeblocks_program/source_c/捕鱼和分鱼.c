/*����ͷ��㡣ABCDE������ĳ��ҹ��ϻ�ȥ���㣬���ڶ����賿ʱ��ƣ��������
���Ǹ����ҵط�˯�����������ͣ�A��һ�������������Ϊ5�ݣ��Ѷ����1�����ӵ���
�����Լ���1�ݡ�B�ڶ���������Ҳ�����5�ݣ��Ѷ����1�����ӵ��������Լ���1�ݡ�
CDE����������Ҳ��ͬ���ķ������㡣�����Ǻϻ����ٲ��˶������㣿
**�����ʽҪ��"Total number of fish catched=%d\n"*/

#include <stdio.h>
int main()
{
    int i,j;
    int x,count=0;
    int flag;
    for(i=6;i<4000;i++)
    {
        flag=1;
        x=i;
        for(j=0;j<5;j++)
        {
            x--;
            if(x%5!=0)
            {
                flag=0;
                break;
            }
            count++;
            x=4*x/5;
        }
        if(flag==1)
        {
            break;
        }
    }
    printf("Total number of fish catched=%d\n",i);
    return 0;
}

/*#include<stdio.h>

void main()

{

    int n,i,x,flag=1;          //flag�����Ʊ��

    for(n=6;flag;n++)          //������̽�ķ���������ֵ̽n�𲽼Ӵ�

    {

        for(x=n,i=1;i<=5;i++)

            if((x-1)%5==0) x=4*(x-1)/5;

            else  flag=0;        //      �����ܷ������ñ��falg=0�˳��������

        if(flag) break;            //  ��������������������ҵ�����˳���̽�Ĺ���

        else flag=1;                 // ���������̽��һ����

    }

    printf("Total number of fish catched=%d\n",n);     //������

}*/
