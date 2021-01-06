/*�������Լ��������3�����ʣ����õݹ鷨��д�������Լ���ĺ���Gcd()��
���������е��øú������㲢����Ӽ�������������������������Լ����
����1  ���a>b����a��b��a-b��b�����Լ����ͬ����Gcd(a, b) = Gcd(a-b, b)
����2  ���b>a����a��b��a��b-a�����Լ����ͬ����Gcd(a, b) = Gcd(a, b-a)
����3  ���a=b����a��b�����Լ����aֵ��bֵ��ͬ����Gcd(a, b) = a = b
Ҫ�����£�
��1���Ӽ������������������
     ����������Gcd()����������������������Լ����
��2��Gcd����ԭ��Ϊ��
     int Gcd(int a, int b);
     �����������������������򷵻�-1�����򣬷��������������Լ����
��3��**������ʾ��Ϣ��ʽҪ��"Input a,b:"
       �����ʽ��"%d,%d"
     **�����ʾ��ϢҪ��
       �����벻���������������"Input number should be positive!\n"
       �������"Greatest Common Divisor of %d and %d is %d\n"
ע��������ʹ��goto���*/

#include <stdio.h>

int Gcd(int a,int b);

int main()
{
    int a,b;
    printf("Input a,b:");
    scanf("%d,%d",&a,&b);
    if(a<0||b<0)
    {
        printf("Input number should be positive!\n");
        return -1;
    }
    printf("Greatest Common Divisor of %d and %d is %d\n",a,b,Gcd(a,b));
    return 0;
}

int Gcd(int a,int b)
{
    if(a>b)
    {
        return Gcd(a-b,b);
    }
    else if(a<b)
    {
        return Gcd(a,b-a);
    }
    else
    {
        return a;
    }
}
