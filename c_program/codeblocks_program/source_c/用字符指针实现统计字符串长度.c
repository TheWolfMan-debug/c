#include <stdio.h>
unsigned int  MyStrlen( char *pstr);
int main()
{
    char a[100];
    unsigned int b;
    printf("Please enter a string:\n");
    fgets(a,sizeof(a),stdin);
    b=MyStrlen(a);
    printf("The length of the string is:%u\n",b);
    return 0;
}
unsigned int  MyStrlen( char *pstr)
{
    unsigned int count=0;
    int i;
    for(i=0;*pstr!='\0';i++)
    {
        count++;
        pstr++;
    }
    return count-1;
}
/*���ַ�ָ��ʵ��ͳ���ַ������ȡ�ע��������ʹ���ַ������Ⱥ���
�������º�����д��
unsigned int  MyStrlen( char *pstr);

***������ʾ��Ϣ��"Please enter a string:\n"
***�����ʽҪ���޸�ʽҪ��
***�����ʽҪ��"The length of the string is:%u\n"*/
