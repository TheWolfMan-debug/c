#include <stdio.h>
int main()
{
    int  a,b,*p,*q,t;
    p=&a;
    q=&b;
    printf("���������a��b��ֵ:");
    scanf("%d%d",p,q);
    t=*p ;
    *p=*q ;
    *q=t ;
    printf("������a��b��ֵ��a=%d b=%d\n",*p,*q);
}
