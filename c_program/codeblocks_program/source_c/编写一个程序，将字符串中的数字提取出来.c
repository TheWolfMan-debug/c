/*��дһ�����򣬽��û�������������ַ��ͷ������ַ���ɵ��ַ����е�������ȡ����
�����磺����asd123,34fgh_566kkk789������������ֱַ���123��34��789����
**�����ʽҪ����ʾ��Ϣ��"Please enter a string:"
**�����ʽҪ��"the result of output:\n" "%10d\n"
��������ʾ�����£�
Please enter a string:
abc123def456ghi111bbbccc99go100
the result of output:
       123
       456
       111
        99
       100*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100

void digit(char *pa);

int main()
{
    char a[N];
    char *pa=a;
    printf("Please enter a string:");
    gets(a);
    printf("the result of output:\n");
    digit(pa);
    return 0;
}

void digit(char *pa)
{
    while(*pa)
    {
        if(*pa<'0'||*pa>'9')
        {
            *pa=' ';
            pa++;
        }
        if(atoi(pa))
        {
            printf("%10d\n",atoi(pa));
        }
        while(*pa>='0'&&*pa<='9')
        {
            *pa=' ';
            pa++;
        }
    }
}
