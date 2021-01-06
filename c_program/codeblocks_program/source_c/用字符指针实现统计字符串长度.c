#include <stdio.h>
unsigned int  MyStrlen( char *pstr);
int main()
{
    char a[100];
    unsigned int b;
    printf("Please enter a string:\n");
    fgets(a,sizeof(a),stdin);
    b=MyStrlen(a);
    printf("The length of the string is:%u\n",b);
    return 0;
}
unsigned int  MyStrlen( char *pstr)
{
    unsigned int count=0;
    int i;
    for(i=0;*pstr!='\0';i++)
    {
        count++;
        pstr++;
    }
    return count-1;
}
/*用字符指针实现统计字符串长度。注：不允许使用字符串长度函数
请用以下函数编写：
unsigned int  MyStrlen( char *pstr);

***输入提示信息："Please enter a string:\n"
***输入格式要求：无格式要求
***输出格式要求："The length of the string is:%u\n"*/
