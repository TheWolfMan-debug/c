/*写一个程序读入你的姓名，然后每个字母间加一个空格后输出。例如，姓名John显示为J o h n。

**输入格式要求："%s"  提示信息："请输入你的姓名："*/

#include <stdio.h>
#define N 20

int main()
{
    char a[N];
    int i;
    printf("请输入你的姓名：");
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        printf("%c",a[i]);
        printf(" ");
    }
    return 0;
}
