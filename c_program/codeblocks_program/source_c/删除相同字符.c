/*延长答题时间
下面的程序Squeeze函数的功能是删除字符串s中所出现的与变量c相同的字符。注意：
(1)请将修改正确后的完整源程序拷贝粘贴到答题区内；
(2)对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分；
(3)当且仅当错误全部改正，且程序运行结果调试正确，才给加5分；
(4)改错时不能改变程序原有的意图，不能改变函数原型；
(5)按原题要求，先读入字符串，再读入字符c；
(6)c为任意字符（空格除外）；不能修改函数原型。*/
#include <stdio.h>
void  Squeeze(char *s, char c);
void main()
{
    char a[80], c;
    scanf("%s", a);
    getchar();
    scanf("%c", &c);
    Squeeze(a,c);
    printf("%s\n",a);
}
void  Squeeze(char *s, char c)
{
    int i, j=0;
    for (i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) != c)
        {
            *(s + j) = *(s + i);
            j++;
        }

    }
    *(s + j) = '\0';
}
