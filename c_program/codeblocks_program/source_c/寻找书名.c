/*�ڸ�����һ�������У��Ӽ�����������һ�����������������пո񣩡����ҵ������ӡ�������������ӡ"û�ҵ�"���ҳ����д��󲢸���֮��
#include <string.h>
#include <stdio.h>
int main()
{
    int i, findFlag;
    char x;
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };

    printf("������һ���ַ���:");
    gets(x);

    while (i<6 & !findFlag)
    {
        if (x = str[i])
        {
            findFlag = 1;
        }
         i++;
    }

    if (findFlag)
    {
       printf("%s\n", x);
    }
    else
    {
       printf("û�ҵ�!\n");
    }
       return 0;
}
ע�⣺����û�д������䣬�벻Ҫ�޸ģ��޸�ԭ����ȷ�����ҲҪ�۷֡�
�Ĵ�ʱ���ܸı����ԭ�е���ͼ�����ǿ��Ըı���������͡�*/

#include <string.h>
#include <stdio.h>
int main()
{
    int i=0, findFlag=0;
    char x[13];
    char str[][13]={ "Pascal","Basic","Fortran", "Java", "Visual C", "Visual Basic" };

    printf("������һ���ַ���:");
    gets(x);

    while (i<6 && !findFlag)
    {
        if (strcmp(x,str[i])==0)
        {
            findFlag = 1;
        }
         i++;
    }

    if (findFlag)
    {
       printf("%s\n", x);
    }
    else
    {
       printf("û�ҵ�!\n");
    }
       return 0;
}
