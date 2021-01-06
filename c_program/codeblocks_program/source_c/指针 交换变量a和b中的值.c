#include <stdio.h>
int main()
{
    int  a,b,*p,*q,t;
    p=&a;
    q=&b;
    printf("请输入变量a和b的值:");
    scanf("%d%d",p,q);
    t=*p ;
    *p=*q ;
    *q=t ;
    printf("交换后a和b的值：a=%d b=%d\n",*p,*q);
}
