/*在给定的一组书名中，从键盘任意输入一个书名（书名可以有空格）。若找到，则打印该书名，否则打印"没找到"。找出其中错误并改正之。
#include <string.h>
#include <stdio.h>
int main()
{
    int i, findFlag;
    char x;
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };

    printf("请输入一个字符串:");
    gets(x);

    while (i<6 & !findFlag)
    {
        if (x = str[i])
        {
            findFlag = 1;
        }
         i++;
    }

    if (findFlag)
    {
       printf("%s\n", x);
    }
    else
    {
       printf("没找到!\n");
    }
       return 0;
}
注意：对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
改错时不能改变程序原有的意图，但是可以改变变量的类型。*/

#include <string.h>
#include <stdio.h>
int main()
{
    int i=0, findFlag=0;
    char x[13];
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };

    printf("请输入一个字符串:");
    gets(x);

    while (i<6 && !findFlag)
    {
        if (strcmp(x,str[i])==0)
        {
            findFlag = 1;
        }
         i++;
    }

    if (findFlag)
    {
       printf("%s\n", x);
    }
    else
    {
       printf("没找到!\n");
    }
       return 0;
}
