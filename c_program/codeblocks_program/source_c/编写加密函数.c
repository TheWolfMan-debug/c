/*��д���ܳ��򣬽��û������һ��Ӣ�ľ��Ӽ���Ϊ�����ַ�����Ȼ����������ַ�����
������ӳ��Ȳ�����100���ַ������ݸ����ľ��Ӽ��ܺ���ԭ��SentenceEncoding����д����SentenceEncoding���ø������ַ����ܺ���CharEncoding��ɾ��Ӽ��ܡ�
Ȼ�󣬱�д��������ʾ�û�����Ӣ�ľ��ӣ�Ȼ����ú���SentenceEncoding�Ծ��Ӽ��ܣ����������ܺ�ľ��ӡ�
�ַ����ܹ���Ϊ��д��ĸ��Сд��ĸ������Ϊ�䲹��, ���Ƕ���ASCII��ֵ���Ϊ��A��+��Z����155��������д��ĸ��Ϊ���룬
ASCII��ֵ���Ϊ��a��+��z����219������Сд��ĸ��Ϊ���롣
�ո���@����,�����#����,�����ַ��þ����档
����ԭ�ͣ�
void SentenceEncoding(char *soure,char *code);
���ܣ��Դ������ַ���source���ܺ󱣴�����ַ�����code.
������char *soure��ָ������ܾ��ӵ��ַ���ָ�룻
      char *code ָ������ַ������ַ���ָ�룻
 �ַ����ܺ������롣
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

������ʾ��Ϣ��"Input source sentence:"
�����ʾ��Ϣ��"Encoded sentence:"
��������ַ��������һ���س���

����ʵ��1��
Input source sentence:I am a teacher.
Encoded sentence:R@zn@z@gvzxsvi#

����ʵ��2��
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
