/*����Բ���ĸߺͰ뾶����Բ�������volume=3.1415926*r*r*h��
Ҫ����͵��ú���double cylinder(double r, double h)����Բ����������
**�����ʽҪ��"%lf%lf" ��ʾ��Ϣ��"Enter radius and height: "
**�����ʽҪ��"Volume = %.3f\n"
��������ʾ�����£�
Enter radius and height: 3.0 10
volume = 282.743*/

#include <stdio.h>

double cylinder(double r, double h);
int main()
{
    double v,r,h;
    printf("Enter radius and height: ");
    scanf("%lf%lf",&r,&h);
    v=cylinder(r,h);
    printf("Volume = %.3f\n",v);
    return 0;
}

double cylinder(double r, double h)
{
    return 3.1415926*r*r*h;
}
