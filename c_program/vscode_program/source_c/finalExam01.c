// （必须编写自定义函数实现下列功能：）假设允许采用以下四类字符作为密码：
// （1）大写英文字母，（2）小写英文字母，（3）数字0-9，（4）特殊符号 @ - _ # ~
// 密码要求:
// 1.长度超过8位；
// 2.包括大小写字母、数字、其它符号,密码组合中包含以上四种中至少三种字符；

// 程序运行示例1：
// abc123
// 密码长度太短且密码中应包含大小写字母、数字、其它符号四种中至少三种字符

// 程序运行示例2：
// Asd123%
// 密码中存在非法字符
// 密码长度太短

// 程序运行示例3：
// abc12^*
// 密码中存在非法字符
// 密码长度太短且密码中应包含大小写字母、数字、其它符号四种中至少三种字符

// 输入提示：无
// 输出信息提示：
// 　如果密码符合上述要求，则输出："密码设置成功\n"，
//     不符合要求则提示："密码长度太短且密码中应包含大小写字母、数字、
//     其它符号四种中至少三种字符\n" 或 "密码长度太短\n" 或者"密码中应包含
//大小写字母、数字、其它符号四种中至少三种字符\n" 或"密码中存在非法字符\n"
//(提示:可能输出多个提示.)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#define N 100

void password(char p[])
{
    int i = 0, count = 0, flags = 0, flagb = 0, flagn = 0, flago = 0, flagi = 0;
    while (p[i] != '\0')
    {
        count++;
        i++;
    }
    // printf("%d\n", count);

    for (i = 0; i < strlen(p); i++)
    {
        flagb = 0;
        flags = 0;
        flagn = 0;
        flago = 0;
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            flagb = 1;
        }
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            flags = 1;
        }
        if (p[i] >= '0' && p[i] <= '9')
        {
            flagn = 1;
        }
        if (p[i] == '@' || p[i] == '-' || p[i] == '_' || p[i] == '#' || p[i] == '~')
        {
            flago = 1;
        }
        if (flagb == 0 && flags == 0 && flagn == 0 && flago == 0)
        {
            flagi = 1;
        }
    }
    if (flagi == 1)
    {
        printf("密码中存在非法字符\n");
    }

    flagb = 0;
    flags = 0;
    flagn = 0;
    flago = 0;

    for (i = 0; i < strlen(p); i++)
    {
        if (p[i] >= 'A' && p[i] <= 'Z')
        {
            flagb = 1;
        }
        if (p[i] >= 'a' && p[i] <= 'z')
        {
            flags = 1;
        }
        if (p[i] >= '0' && p[i] <= '9')
        {
            flagn = 1;
        }
        if (p[i] == '@' || p[i] == '-' || p[i] == '_' || p[i] == '#' || p[i] == '~')
        {
            flago = 1;
        }
        if (flagb == 0 && flags == 0 && flagn == 0 && flago == 0)
        {
            flagi = 1;
        }
    }

    // printf("%d\n", flags);
    // printf("%d\n", flago);
    // printf("%d\n", flagb);
    // printf("%d\n", flagn);

    if (count < 8 && (flags + flagb + flagn + flago) < 3)
    {
        printf("密码长度太短且密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
    }
    else if (count < 8)
    {
        printf("密码长度太短\n");
    }
    else if (count >= 8 && (flags + flagb + flagn + flago) < 3)
    {
        printf("密码中应包含大小写字母、数字、其它符号四种中至少三种字符\n");
    }
    else
    {
        printf("密码设置成功\n");
    }
}

int main()
{
    char p[N];
    gets(p);
    password(p);

    system("pause");
    return 0;
}