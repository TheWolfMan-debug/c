/*#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char a[N];
    char *p=a;
    printf("请输入一个字符串，长度小于等于100：");
    gets(a);
    for( ;*p!='\0';p++)
    {
        printf("%3d\n",*p);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[101] = {'\0'};
    char *p1, *p2;

    printf("请输入一个字符串，长度小于等于100：");
    scanf("%s", str);

    p1 = (char *)(str + strlen(str));
    p2 = (char *)str;

    printf("该字符串的内存编码为： ");
    while (p1 > p2)
    {
        printf("%x ", (unsigned char)*p2 & 0xff);
        p2++;
    }

    return 0;
}
/*利用指针能直接操作内存的特点来编程输出字符串中每个字符在内存中的存储编码（字符串中可以包含英文数字和汉字）。
程序的运行示例1如下：
请输入一个字符串，长度小于等于100：abcABC012中国人
该字符串的内存编码为： 61 62 63 41 42 43 30 31 32 d6 d0 b9 fa c8 cb
程序的运行示例2如下：
请输入一个字符串，长度小于等于100：12345上山打老虎
该字符串的内存编码为： 31 32 33 34 35 c9 cf c9 bd b4 f2 c0 cf bb a2*/
