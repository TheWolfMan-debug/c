/*�õ�������x=sqrt(a)����ƽ�����ĵ�����ʽΪ��xn+1= (1/2)(xn+ a/xn)��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��10-5��

**�����ʽҪ��"%f" ��ʾ��Ϣ��"������һ��������"
**�����ʽҪ��"%5.2f��ƽ����=%8.5f\n"*/

#include<stdio.h>
#include<math.h>
int main()
{
    float x =1 , x1 ;
    float a ;
    printf("������һ��������");
    scanf("%f",&a);
    do
    {
        x = 1.0/2*(x+a/x);
        x1 = 1.0/2*(x+a/x);
    }while(fabs(x-x1) > 1e-5);
    printf("%5.2f��ƽ����=%8.5f\n",a,x);

    return 0;
}
