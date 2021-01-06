/*编写一个程序，将用户输入的由数字字符和非数字字符组成的字符串中的数字提取出来
（例如：输入asd123,34fgh_566kkk789，则产生的数字分别是123、34、789）。
**输入格式要求：提示信息："Please enter a string:"
**输出格式要求："the result of output:\n" "%10d\n"
程序运行示例如下：
Please enter a string:
abc123def456ghi111bbbccc99go100
the result of output:
       123
       456
       111
        99
       100*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

void digit(char *pa);

int main()
{
    char a[N];
    char *pa=a;
    printf("Please enter a string:");
    gets(a);
    printf("the result of output:\n");
    digit(pa);
    return 0;
}

void digit(char *pa)
{
    while(*pa)
    {
        if(*pa<'0'||*pa>'9')
        {
            *pa=' ';
            pa++;
        }
        if(atoi(pa))
        {
            printf("%10d\n",atoi(pa));
        }
        while(*pa>='0'&&*pa<='9')
        {
            *pa=' ';
            pa++;
        }
    }
}
