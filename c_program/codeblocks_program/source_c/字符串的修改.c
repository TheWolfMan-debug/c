/*���� 1205: �ַ������޸�
ʱ������: 1Sec �ڴ�����: 128MB �ύ: 449 ���: 326
��Ŀ����
��ô����ǰ����⻹���԰�~
�������ַ���������A��B�������ַ���������Ҫ�����ٵ��ַ��������������ַ���Aת��Ϊ�ַ���B��������˵���ַ������������֣�


1. ɾ��һ���ַ���
2. ����һ���ַ���
3. ��һ���ַ���Ϊ��һ���ַ���
���θ��������ַ���A��B����������ַ���A�任Ϊ�ַ���B���õ������ַ�����������
����
��һ��Ϊ�ַ���A���ڶ���Ϊ�ַ���B���ַ���A��B�ĳ��Ⱦ�С��200��
���
ֻ��һ����������Ϊ�����ַ�����������
��������
sfdxbqw
gfdgw

�������
4*/

#include <stdio.h>
#include <string.h>
#define N 200

int main()
{
    char a[N],b[N],c[N];
    gets(a);
    gets(b);
    strcpy(c,b);
    //printf("%d\n%d",strlen(a),strlen(b));
    int i,j,k,count,same_char=0;
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
            if(a[i]==b[j])
            {
                same_char++;
                for(k=j;k<strlen(b);k++)
                {
                    b[k]=b[k+1];
                }
                break;
            }
        }
    }
    count=(strlen(a)>strlen(c)?strlen(a)-same_char:strlen(c)-same_char);
    //puts(b);
    printf("%d %d",count);
    return 0;
}
