/*�ô����Ǯ����������һ��������ȡ����ϢΪ0.63%����ϢΪ12*0.63%����Ϣ���������㣩��
����ĳ��������һ��Ǯ���������ڽ���������ÿ������ȡ��1000Ԫ����������ʱ�պ�ȡ�꣬
���������ǮʱӦ������١�
**�����ʽҪ��"He must save %.2f at first.\n"*/

#include <stdio.h>
int main()
{
    float sum=1000,x,rate;
    int i;
    rate=1+12*0.0063;
    for(i=0;i<5;i++)
    {
        sum=sum/rate+1000;
    }
    printf("He must save %.2f at first.\n",sum-1000);
    return 0;
}
