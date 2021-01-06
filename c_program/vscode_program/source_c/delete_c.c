/*问题 1847: 字符串中间和后边*号删除

时间限制: 1Sec 内存限制: 128MB 提交: 703 解决: 223

题目描述
假定输人的字符串中只包含字母和*号。请编写函数fun(　　)，它的功能是：除了字符串前导的*号之外，将串中其他*号全部删除。在编写函数时，不得使用C语言提供的字符串函数。

注意：部分源程序给出如下。

请勿改动main(　　)函数和其他函数中的任何内容，仅在函数fun(　　)的花括号中填入所编写的若干语句。

输入
输入包含字母和*号的字符串，要求字符串前后都有连续*号，字符串中字母之间也要有*号。

输出
除字符串中的前导*号外，把中间和后面的*号全部删除

样例输入
****a*bc*def*g****
样例输出
****abcdefg*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int fun(char *a)
{
    int i=0, j=0;
    char b[10000];
    while (a[i]!='\0' && a[i] == '*')
    {
        b[j] = a[i];
        i++;
        j++;
    }

    while (1)
    {
        if (a[i] != '*' && a[i]!='\0')
        {
            b[j] = a[i];
            j++;
            i++;
        }
        else if (a[i]!='\0')
        {
            i++;
        }
        else
        {
            break;
        }
    }
    b[j]='\0';
    strcpy(a, b);

    return 0;
}

int main()
{
    char s[81];
    gets(s);
    fun(s);
    puts(s);
    system("pause");
    return 0;
}

// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

// int fun(char *a)
// {
//     while (1)
//     {
//         if ((*a == '*')&&(*a))
//         {
//             printf("%c", *a);
//             a++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     while (1)
//     {
//         if ((*a != '*')&&(*a))
//         {
//             printf("%c", *a);
//             a++;
//         }
//         else if(*a)
//         {
//             a++;
//         }
//         else
//         {
//             break;
//         }
//     }

//     return 0;
// }

// int main()
// {
//     char s[81];
//     gets(s);
//     fun(s);
//     // puts(s);
//     system("pause");
//     return 0;
// }