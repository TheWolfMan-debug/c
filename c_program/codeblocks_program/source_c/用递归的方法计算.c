/*���õݹ�ķ����������к�����ֵ��px(x,n)=x-x^2+x^3-x^4+��((-1)^n-1)(x^n)  n>0
**�����ʽҪ��"%lf%d" ��ʾ��Ϣ��"Enter X and N:"
**�����ʽҪ��"px=%lf\n"
��������ʾ�����£�
Enter X and N:4 6
px=-3276.000000*/

#include <stdio.h>
#include <math.h>
double px(int x,int n);


int main()
{
    double x;
    int n;
    printf("Enter X and N:");
    scanf("%lf%d",&x,&n);
    printf("px=%lf\n",px(x,n));
    return 0;
}
double px(int x,int n)
{
    if(n==1)
    {
        return x;
    }
    else
    {
        return px(x,n-1)+pow(-1,n-1)*pow(x,n);
    }
}
