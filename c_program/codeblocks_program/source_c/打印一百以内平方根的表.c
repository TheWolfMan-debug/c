/*�����¸�ʽ��ӡ100����������ƽ������



**�����ʽҪ��"%7d" ����ͷ��  "%d" ��ÿ�п�ʼ���֣� "%7.3f" ��ƽ������*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    float x=0;
    for(j=0;j<10;j++)
    {
        printf("%7d",j);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",i);
        for(j=0;j<10;j++)
        {
            printf("%7.3f",sqrt(x));
            x++;
        }
        printf("\n");
    }
    return 0;
}
