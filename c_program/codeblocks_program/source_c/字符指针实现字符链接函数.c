/*��ָ�������������Լ����ʵ���ַ������Ӻ���strcat()�Ĺ��ܡ�
��������д��ڱȽ����εĴ�����ͨ�������͵��Գ��򣬷��ֲ����������еĴ���
ע�⣺�뽫�޸���ȷ�������Դ���򿽱�ճ�����������ڡ�
����û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
���ҽ�������ȫ���������ҳ������н��������ȷ���Ÿ���5�֡�
����ʦ�ֹ��˶Ժ����δ��ָ��������������̣���ô��ʹ����Ҳ�����֡�
�Ĵ�ʱ���ܸı����ԭ�е���ͼ�����ܸı亯��ԭ�͡�*/


#include <stdio.h>
#define N  80
void MyStrcat(char *dstStr, char *srcStr);
void main()
{
    char s[N], t[N];
    printf("Input a string:\n");
    gets(s);
    printf("Input another string:\n");
    gets(t);
    MyStrcat(s, t);
    printf("Concatenate results:%s\n", s);
}
void MyStrcat(char *dstStr, char *srcStr)
{
    while (*dstStr != '\0')
    {
        dstStr++;
    }
    while (*srcStr != '\0')
    {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *dstStr='\0';
}
