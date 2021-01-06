/*用字符指针作函数参数编程实现字符串逆序存放功能。
输入提示信息："Input a string:"
输入字符串用gets()
输出提示信息："Inversed results:%s\n"*/

#include <stdio.h>
#define N 100

int main()
{
    char a[N],b[N];
    char *p1=a,*p2=b;
    printf("Input a string:");
    gets(a);
    while(*p1)
    {
        p1++;
    }
    p1--;
    while(*p1!=a[0])
    {
        *p2=*p1;
        p1--;
        p2++;
    }
    *p2=*p1;
    p2++;
    *p2='\0';
    printf("Inversed results:%s\n",b);
    return 0;
}
