/*编写加密程序，将用户输入的一个英文句子加密为加密字符串，然后输出加密字符串。
假设句子长度不超过100个字符。根据给定的句子加密函数原型SentenceEncoding，编写函数SentenceEncoding调用给定的字符加密函数CharEncoding完成句子加密。
然后，编写主程序提示用户输入英文句子，然后调用函数SentenceEncoding对句子加密，最后输出加密后的句子。
字符加密规则为大写字母和小写字母均加密为其补码, 我们定义ASCII码值相加为’A’+’Z’即155的两个大写字母互为补码，
ASCII码值相加为’a’+’z’即219的两个小写字母互为补码。
空格用@代替,句号以#代替,其它字符用句点代替。
函数原型：
void SentenceEncoding(char *soure,char *code);
功能：对待加密字符串source加密后保存加密字符串到code.
参数：char *soure，指向待加密句子的字符串指针；
      char *code 指向加密字符串的字符串指针；
 字符加密函数代码。
char CharEncoding(char ch)
{
    char encode  = 0;
    if(ch>='A' && ch<='Z')
    {
        encode  = ('A'+'Z')- ch;
    }
    else if(ch>='a' && ch<= 'z' )
    {
        encode  = 'a'+'z'-ch;
    }
    else
    {
        switch(ch)
        {
        case ' ': encode = '@';
                    break;
        case '.': encode = '#';
                    break;
        default: encode = '.';
                    break;
        }
    }
    return encode;
}

输入提示信息："Input source sentence:"
输出提示信息："Encoded sentence:"
输出加密字符串后，输出一个回车。

运行实例1：
Input source sentence:I am a teacher.
Encoded sentence:R@zn@z@gvzxsvi#

运行实例2：
Input source sentence:You are a student.
Encoded sentence:Blf@ziv@z@hgfwvmg#*/

#include <stdio.h>
#include <string.h>
#define N 100

void SentenceEncoding(char *soure,char *code);
char CharEncoding(char ch);

int main()
{
    char print[N],codes[N];
    char *soure=print,*code=codes;
    printf("Input source sentence:");
    gets(print);
    SentenceEncoding(soure,code);
    printf("Encoded sentence:");
    puts(codes);
    return 0;
}

void SentenceEncoding(char *soure,char *code)
{
    while(*soure)
    {
        *code=CharEncoding(*soure);
        soure++;
        code++;
    }
    *code='\0';
}

char CharEncoding(char ch)
{
    char encode  = 0;
    if(ch>='A' && ch<='Z')
    {
        encode  = ('A'+'Z')- ch;
    }
    else if(ch>='a' && ch<= 'z' )
    {
        encode  = 'a'+'z'-ch;
    }
    else
    {
        switch(ch)
        {
        case ' ': encode = '@';
                    break;
        case '.': encode = '#';
                    break;
        default: encode = '.';
                    break;
        }
    }
    return encode;
}
