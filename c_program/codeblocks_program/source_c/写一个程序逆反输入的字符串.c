
#include <stdio.h>
#include<string.h>
#define N 100

void reverse(char str[])
{
    char t;
    int i, j;
    for (i = 0, j = strlen(str); i < (strlen(str) / 2); i++, j--)
    {
        t = str[i];
        str[i] = str[j -1];
        str[j -1] = t;
    }
}
int main()
{
    char str[N];
    printf("请输入一个字符串：");
    gets(str);
    reverse(str);
    printf("该字符串逆反后为%s！\n", str);
    return 0;
}
/*
#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
    char *t = s + strlen(s) - 1;
    char temp;

    while (s <= t)
    {
        temp = *t;
        *t = *s;
        *s = temp;
        s++;
        t--;
    }
}

int main()
{
    char str[100];

    printf("请输入一个字符串：");
    gets(str);

    reverse(str);
    printf("该字符串逆反后为%s！\n", str);
}	*/


