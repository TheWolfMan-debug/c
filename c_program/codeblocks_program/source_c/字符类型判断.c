/*�ַ������ж�
�Ӽ��̼�������һ���ַ����жϸ��ַ���Ӣ����ĸ�������ִ�Сд���������ַ����������ַ�����������ĸ������Ļ��ʾ It is an English character.����������������Ļ��ʾIt is a digit character. �������������ַ�������Ļ��ʾ��It is other character.

���������ʾ��1��
Input simple:
b�L
It is an English character.

���������ʾ��2��
Input simple:
6�L
It is a digit character.

���������ʾ��3��
Input simple:
*�L
It is other character.

���������ʾ��4��
Input simple:
A�L
It is an English character.


�����ʽ: "%c"
������Ϣ��ʾ��"Input simple:\n"
Ӣ���ַ��������ʽ��"It is an English character.\n"
���ֵ������ʽ��"It is a digit character.\n"
�����ַ��������ʽ��"It is other character.\n"*/


/*�Ӽ�����������һ���ַ�������жϸ��ַ��������ַ���Ӣ����ĸ���ո��������ַ���
**�����ʽҪ����ʾ��Ϣ��"Press a key and then press Enter:"
**�����ʽҪ��"It is an English character!\n" "It is a digit character!\n"  "It is a space character!\n"  "It is other character!\n"
��������ʾ��1���£�
Press a key and then press Enter:A
It is an English character!
��������ʾ��2���£�
Press a key and then press Enter:2
It is a digit character!
��������ʾ��3���£�
Press a key and then press Enter:
It is a space character!
��������ʾ��4���£�
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
