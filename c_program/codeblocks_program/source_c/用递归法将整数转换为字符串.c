/*�õݹ鷨��һ������nת�����ַ�������������483��Ӧ����ַ�����483����n��λ����ȷ��������������λ����������
**������ʾ��"\n����������"
**�����ʽ��"%d"
**�����ʾ��"\n����ǣ�"
**���ת�����ַ���

���������ʾ�����£�
����������345
����ǣ�345*/

#include <stdio.h>
#include <math.h>

int str(int n);

int main()
{
    int n;
    //printf("%d",(int)pow(10,0));
    printf("\n����������");
    scanf("%d",&n);
    printf("\n����ǣ�");
    str(n);
    return 0;
}

int str(int n)
{
    int m,count=0,i;
    m=n;
    while(n)
    {
        count++;
        n/=10;
    }
    while(m)
    {
        //printf("%d",m);
        i=(int)pow(10,count-1);
        printf("%c",m/i+48);
        m=m%i;
        return str(m);
    }
}
