#include <stdio.h>
#include <string.h>
void Inverse(char str[], char ptr[]);
int main()
{
    char str1[100],str2[100];
    printf("Input a string:");
    gets(str1);
    Inverse(str1,str2);
    return 0;
}
void Inverse(char str[], char ptr[])
{
    int i,x,j;
    x=strlen(str);
    for(i=0,j=x-1;i<x;i++,j--)
    {
        ptr[i]=str[j];
    }
    ptr[i]='\0';
    printf("Inversed results:%s\n",ptr);
}
/*�����º���ԭ�ͱ�д�������ַ������������������ʵ���ַ��������Ź��ܡ�
void Inverse(char str[], char ptr[]);
������ʾ��Ϣ��"Input a string:"
�����ַ�����gets()
�����ʾ��Ϣ��"Inversed results:%s\n"*/
