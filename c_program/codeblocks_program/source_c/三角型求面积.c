/*��д����ʵ�����¹��ܣ��Ӽ�����������������a��b��c����a��b��c��ֵ�ܹ��������Σ�
����㲢��������ε�����������ӡ������������Ρ���֪��������������Ĺ�ʽΪ��
     s=(a+b+c)/2
    area=sqrt(s(s-a)(s-b)(s-c))
***������ʾ��Ϣ��"Input a,b,c:"
***�������ݸ�ʽ��"%f,%f,%f"
***�����ʽҪ��
    ���������Σ���������ݸ�ʽΪ��"area=%.4f\n"
  �����������Σ���������ݸ�ʽΪ��"It is not a triangle\n"*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,area,s;
    printf("Input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%.4f\n",area);
    }
    else
    {
        printf("It is not a triangle\n");
    }
    return 0;
}
