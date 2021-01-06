/*字符类型判断
从键盘键入任意一个字符，判断该字符是英文字母（不区分大、小写）、数字字符还是其它字符。若键入字母，则屏幕显示 It is an English character.；若键入数字则屏幕显示It is a digit character. ；若输入其它字符，则屏幕显示：It is other character.

程序的运行示例1：
Input simple:
b↙
It is an English character.

程序的运行示例2：
Input simple:
6↙
It is a digit character.

程序的运行示例3：
Input simple:
*↙
It is other character.

程序的运行示例4：
Input simple:
A↙
It is an English character.


输入格式: "%c"
输入信息提示："Input simple:\n"
英文字符的输出格式："It is an English character.\n"
数字的输出格式："It is a digit character.\n"
其它字符的输出格式："It is other character.\n"*/


/*从键盘任意输入一个字符，编程判断该字符是数字字符、英文字母、空格还是其他字符。
**输入格式要求：提示信息："Press a key and then press Enter:"
**输出格式要求："It is an English character!\n" "It is a digit character!\n"  "It is a space character!\n"  "It is other character!\n"
程序运行示例1如下：
Press a key and then press Enter:A
It is an English character!
程序运行示例2如下：
Press a key and then press Enter:2
It is a digit character!
程序运行示例3如下：
Press a key and then press Enter:
It is a space character!
程序运行示例4如下：
Press a key and then press Enter:#
It is other character!*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Press a key and then press Enter:");
    scanf("%c",&ch);
    if('A'<=ch&&ch<='Z'||'a'<=ch&&ch<='z')
    {
        printf("It is an English character!\n");
    }
    else if('0'<=ch&&ch<='9')
    {
        printf("It is a digit character!\n");
    }
    else if(ch==' ')
    {
        printf("It is a space character!");
    }
    else
    {
        printf("It is other character!\n");
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    char ch;
    printf("Input simple:\n");
    scanf("%c",&ch);
    if('A'<=ch&&ch<='Z'||'a'<=ch&&ch<='z')
    {
        printf("It is an English character.\n");
    }
    else if('0'<=ch&&ch<='9')
    {
        printf("It is a digit character.\n");
    }
    else
    {
        printf("It is other character.\n");
    }
    return 0;
}*/
