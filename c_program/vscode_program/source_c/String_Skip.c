/* 问题 1969: [蓝桥杯][算法提高VIP]字符串跳步

时间限制: 1Sec 内存限制: 128MB 提交: 743 解决: 233

题目描述
给定一个字符串，你需要从第start位开始每隔step位输出字符串对应位置上的字符。
输入
第一行一个只包含小写字母的字符串。

第二行两个非负整数start和step，意义见上。
输出
一行，表示对应输出。
样例输入
abcdefg
2 2
样例输出
ceg */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // char s[1000];
    // char *str=s;
    char *str;
    int start, end, i;
    str = (char *)malloc(sizeof(char) * 1000);
    // printf("Input the str:\n");
    gets(str);
    // printf("Input the start:\n");
    scanf("%d", &start);
    // printf("Input the end:\n");
    scanf("%d", &end);
    i=end;
    while (start && (*str))
    {
        str++;
        start--;
    }

    while (1)
    {
        if (!(*str))
        {
            break;
        }
        printf("%c", *str);
        while (end && (*str))
        {
            str++;
            end--;
        }
        end=i;
    }
    system("pause");
    return 0;
}