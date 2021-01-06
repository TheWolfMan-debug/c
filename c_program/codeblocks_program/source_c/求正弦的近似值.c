/*已知求正弦sin(x)的近似值的多项式公式为：
sin(x)=x−x33!+x55!−x77!+⋯+(−1)nx2n+1(2n+1)!+…
要求输入x和e，按上述公式计算sin(x)的近似值，要求计算的误差小于给定的e。
**输入格式要求："%f%f" 提示信息："Enter x & eps:"
**输出格式要求："sin(%f)=%f\n"  "%d,sin(%f)=%f\n"
程序运行示例如下：
Enter x & eps:5 0.000001
sin(5.000000)=-0.958924
13,sin(5.000000)=-0.958924*/

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,num=1;
    float si=0.0,x,e;
    printf("Enter x & eps:");
    scanf("%f%f",&x,&e);
    for(i=1;fabs(si)>=e;i++)
    {
        num=1;
        if(i%2==0)
        {
            for(j=1;j<=2*i-1;j++)
            {
                num*=j;
            }
            si-=pow(x,2*i-1)/num;
        }
        else
        {
            for(j=1;j<=2*i-1;j++)
            {
                num*=j;
            }
            si+=pow(x,2*i-1)/num;
        }
    }
    printf("sin(%f)=%f\n",x,si);
    printf("%d,sin(%f)=%f\n",i,x,si);
    return 0;
}

/*#include <stdio.h>
#include <math.h>
main()
{ float x,eps,s,y=0,y0,t;
  int n,j;
  printf("Enter x & eps:");
  scanf ("%f%f",&x,&eps);
  n=t=j=1;
  s=x;
  do
  { y0=y;
    if(n%2==0) y=y-s/t;
    else       y=y+s/t;
    s*=x*x;
    t*=(j+1)*(j+2);
    j+=2;
    n++;
  }while(fabs(y0-y)>eps);
  printf("sin(%f)=%f\n",x,sin(x));
  printf("%d,sin(%f)=%f\n",n,x,y);
}*/
