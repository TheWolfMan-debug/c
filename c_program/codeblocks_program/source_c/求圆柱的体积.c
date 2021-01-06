/*输入圆柱的高和半径，求圆柱体积，volume=3.1415926*r*r*h。
要求定义和调用函数double cylinder(double r, double h)计算圆柱体的体积。
**输入格式要求："%lf%lf" 提示信息："Enter radius and height: "
**输出格式要求："Volume = %.3f\n"
程序运行示例如下：
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
