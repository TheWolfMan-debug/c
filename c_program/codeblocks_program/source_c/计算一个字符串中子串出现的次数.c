/*�ú������ʵ�ּ����ַ������Ӵ����ֵĴ�����
����ԭ�ͣ�
int FindString(char *str,char *sub)
Ҫ��
���������������ַ������Ӵ�������FindString()����������Ӵ����ֵĴ�����*/

#include <stdio.h>
#include <string.h>
#define N 100

int main()
{
    char main[N],child[N];
    int i,j,k,flag,ca,cb,count=0;
    gets(main);
    gets(child);
    ca=strlen(main),cb=strlen(child);
    for(i=0;i<ca;i++)
    {
        flag=1;
        k=i;
        for(j=0;j<cb;j++)
        {
            if(main[k]!=child[j])
            {
                flag=0;
                break;
            }
            k++;
        }
        if(flag)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
