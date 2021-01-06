/*用字符指针作函数参数编程实现如下功能：在字符串中删除与某字符相同的字符。
**提示信息：
"Input a string:"
"Input a character:"
**输入格式要求："%s"
**输出格式要求："Results:%s\n"
程序运行示例1如下：
Input a string:hello,world!
Input a character:o
Results:hell,wrld!*/

#include <stdio.h>
#include <string.h>

void del(char *p1,char *p2);

int main()
{
    char oldstr[100],*p1;
    char delestr[100],*p2;
    p1=oldstr;
    p2=delestr;
    printf("Input a string:" );
    gets(oldstr);
    printf("Input a character:");
    scanf("%s",delestr);
    del(p1,p2);
    printf("Results:%s\n",oldstr);
    return 0;
}

void del(char *p1,char *p2)
{
    int i,j;
    for(i=0;i<strlen(p1);i++)
    {
        if(*p2==p1[i])
        {
            for(j=i;j<strlen(p1);j++)
            {
                p1[j]=p1[j+1];
            }
            i--;
        }
    }
}
