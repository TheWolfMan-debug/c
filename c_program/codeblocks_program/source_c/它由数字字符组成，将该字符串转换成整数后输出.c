#include <stdio.h>
int main()
{
    char a[10];
    int i,n=0;
    printf("Enter a string: ");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    int b[n];
    printf("digit = \n");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]-48);
    }

    return 0;
}
/*����һ���Իس��������ַ���������10���ַ��������������ַ���ɣ������ַ���ת���������������ע�⣬����ֱ�ӵ��ÿ⺯��atoi��ɡ�
**������ʾ��Ϣ��"Enter a string: "
**�����ʽҪ��"digit = %d\n"
��������ʾ�����£�
Enter a string: 123
digit = 123*/
