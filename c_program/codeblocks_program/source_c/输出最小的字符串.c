/*输入5个字符串，输出其中最小的字符串。
**输入格式要求："%s"
**输出格式要求："min is %s\n"
程序运行示例如下：
first        <===输入5行字符串
second
third
44444
555555
min is 44444  <===此行为输出*/

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[5][100];
    char min[100];
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }
    strcpy(min,str[0]);
    for(i=0;i<5;i++)
    {
        if(strcmp(min,str[i])>0)
        {
            strcpy(min,str[i]);
        }
    }
    printf("min is %s\n",min);
    return 0;
}
