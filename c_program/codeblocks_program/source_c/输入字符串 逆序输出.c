/*�����ַ�������������ĸ�����֡������ţ��Լ��ո��ַ������������������
���磬�������ַ���Ϊ��I am a student.��,���Ϊ��.tneduts a ma I���������ַ�������󳤶�Ϊ30��
������ʾ��Ϣ��"Please Enter String1:\n"
�����ʽ��gets()
�����ʽ��"Result is:\n%s\n"


�������н��ʾ����
Please Enter String1:
I am a student.�L
Result is:
.tneduts a ma I*/

#include <stdio.h>
#include <string.h>
#define N 30

int main()
{
    char a[N],b[N];
    int i,j;
    printf("Please Enter String1:\n");
    gets(a);
    for(j=strlen(a)-1,i=0;i<strlen(a);i++,j--)
    {
        b[i]=a[j];
    }
    b[i]='\0';
    printf("Result is:\n%s\n",b);
    return 0;
}
