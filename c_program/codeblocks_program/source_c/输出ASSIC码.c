/*#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char a[N];
    char *p=a;
    printf("������һ���ַ���������С�ڵ���100��");
    gets(a);
    for( ;*p!='\0';p++)
    {
        printf("%3d\n",*p);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[101] = {'\0'};
    char *p1, *p2;

    printf("������һ���ַ���������С�ڵ���100��");
    scanf("%s", str);

    p1 = (char *)(str + strlen(str));
    p2 = (char *)str;

    printf("���ַ������ڴ����Ϊ�� ");
    while (p1 > p2)
    {
        printf("%x ", (unsigned char)*p2 & 0xff);
        p2++;
    }

    return 0;
}
/*����ָ����ֱ�Ӳ����ڴ���ص����������ַ�����ÿ���ַ����ڴ��еĴ洢���루�ַ����п��԰���Ӣ�����ֺͺ��֣���
���������ʾ��1���£�
������һ���ַ���������С�ڵ���100��abcABC012�й���
���ַ������ڴ����Ϊ�� 61 62 63 41 42 43 30 31 32 d6 d0 b9 fa c8 cb
���������ʾ��2���£�
������һ���ַ���������С�ڵ���100��12345��ɽ���ϻ�
���ַ������ڴ����Ϊ�� 31 32 33 34 35 c9 cf c9 bd b4 f2 c0 cf bb a2*/
