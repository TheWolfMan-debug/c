/* 1.(30分) 单词接龙
阿泰和女友小菲用英语短信玩单词接龙游戏。一人先写一个英文单词，然后另一个人回复
一个英文单词，要求回复单词的开头有若干个字母和上一个人所写单词的结尾若干个字母
相同，重合部分的长度不限。（如阿泰输入happy，小菲可以回复python，
重合部分为py。）现在，小菲刚刚回复了阿泰一个单词，阿泰想知道这个单词与
自己发过去的单词的重合部分是什么。他们两人都是喜欢写长单词的英语大神，
阿泰觉得用肉眼找重合部分实在是太难了，所以请你编写程序来帮他找出重合部分。
（注：不考虑没接上的情况）

程序运行结果示例1：
happy↙
pythen↙
py

程序运行结果示例2：
sun↙
unknown↙
un

输入格式: "%s%s"
输出格式： "%s\n" */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define N 100

int isExist(char str1[N], char str2[N])
{
    int i, j, flag = 1;
    for (i = strlen(str2) - 1, j = strlen(str1) - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (str2[i] != str1[j])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    char str1[N], str2[N];
    int i;

    scanf("%s%s", str1, str2);
    for (i = strlen(str2) - 1; i >= 0; i--)
    {
        if (isExist(str1, str2))
        {
            printf("%s\n", str2);
            break;
        }
        else
        {
            str2[i] = '\0';
        }
    }

    system("pause");
    return 0;
}
