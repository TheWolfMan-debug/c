/*用指针做函数参数自己编程实现字符串连接函数strcat()的功能。
下面程序中存在比较隐蔽的错误，请通过分析和调试程序，发现并改正程序中的错误。
注意：请将修改正确后的完整源程序拷贝粘贴到答题区内。
对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
经教师手工核对后，如果未用指针做函数参数编程，那么即使做对也不给分。
改错时不能改变程序原有的意图，不能改变函数原型。*/


#include <stdio.h>
#define N  80
void MyStrcat(char *dstStr, char *srcStr);
void main()
{
    char s[N], t[N];
    printf("Input a string:\n");
    gets(s);
    printf("Input another string:\n");
    gets(t);
    MyStrcat(s, t);
    printf("Concatenate results:%s\n", s);
}
void MyStrcat(char *dstStr, char *srcStr)
{
    while (*dstStr != '\0')
    {
        dstStr++;
    }
    while (*srcStr != '\0')
    {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *dstStr='\0';
}
