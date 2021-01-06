/*问题 1402: 简单的字符串

时间限制: 1Sec 内存限制: 128MB 提交: 484 解决: 252

题目描述
输入一串仅包含 'A' - 'Z'的字符串, 用下面的方法进行重新编码:

1. 若子串包含连续k个相同的字符，则改为kX; 其中X为这个子串中唯一的字符.

2. 如果子串中字符仅为1个时, 则前面的'1'则省去.
输入
第一行输入为一个整数N (1 <= N <= 100)代表有几组测试数据. 下面紧跟N行字符串. 
每个字符串仅包含'A' - 'Z' 并且长度都小于 10000.
输出

对于每个字符串, 输出对应解码后的字符串.

样例输入
2
ABC
ABBCCC
样例输出
ABC
A2B3C*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 100

int main()
{
    char str[N];
    int stl, i = 0, j = 0, n;
    // printf("Please input the n:\n");
    scanf("%d", &n);
    getchar();
    while (n)
    {
        // printf("Input the str:\n");
        gets(str);
        stl = strlen(str);
        if (stl == 1)
        {
            puts(str);
        }
        else
        {
            i = 0;
            while (str[i] && str[j])
            {
                j = i;
                while (str[j] == str[i])
                {
                    j++;
                }

                if (j - i == 1)
                {
                    printf("%c", str[i]);
                }
                else
                {
                    printf("%d%c", j - i, str[i]);
                }
                i=j;
            }
        }
        printf("\n");
        n--;
    }

    // system("pause");
    return 0;
}