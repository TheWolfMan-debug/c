/*����5���ַ��������������С���ַ�����
**�����ʽҪ��"%s"
**�����ʽҪ��"min is %s\n"
��������ʾ�����£�
first        <===����5���ַ���
second
third
44444
555555
min is 44444  <===����Ϊ���*/

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[5][100];
    char min[100];
    for(i=0;i<5;i++)
    {
        scanf("%s",str[i]);
    }
    strcpy(min,str[0]);
    for(i=0;i<5;i++)
    {
        if(strcmp(min,str[i])>0)
        {
            strcpy(min,str[i]);
        }
    }
    printf("min is %s\n",min);
    return 0;
}
