#include <stdio.h>
#include <string.h>
void Inverse(char str[], char ptr[]);
int main()
{
    char str1[100],str2[100];
    printf("Input a string:");
    gets(str1);
    Inverse(str1,str2);
    return 0;
}
void Inverse(char str[], char ptr[])
{
    int i,x,j;
    x=strlen(str);
    for(i=0,j=x-1;i<x;i++,j--)
    {
        ptr[i]=str[j];
    }
    ptr[i]='\0';
    printf("Inversed results:%s\n",ptr);
}
/*按如下函数原型编写程序，用字符数组作函数参数编程实现字符串逆序存放功能。
void Inverse(char str[], char ptr[]);
输入提示信息："Input a string:"
输入字符串用gets()
输出提示信息："Inversed results:%s\n"*/
