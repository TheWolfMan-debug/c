/*用迭代法求x=sqrt(a)。求平方根的迭代公式为：xn+1= (1/2)(xn+ a/xn)，要求前后两次求出的x的差的绝对值小于10-5。

**输入格式要求："%f" 提示信息："请输入一个整数："
**输出格式要求："%5.2f的平方根=%8.5f\n"*/

#include<stdio.h>
#include<math.h>
int main()
{
    float x =1 , x1 ;
    float a ;
    printf("请输入一个整数：");
    scanf("%f",&a);
    do
    {
        x = 1.0/2*(x+a/x);
        x1 = 1.0/2*(x+a/x);
    }while(fabs(x-x1) > 1e-5);
    printf("%5.2f的平方根=%8.5f\n",a,x);

    return 0;
}
