/*����һ��������n������һ��2�ĳ˷���
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter n:"
**�����ʽҪ��"pow(2,%d)= %.0f\n"
��������ʾ�����£�
Enter n: 5     <== ����5
pow(2,0)= 1    <== �˺�Ϊ���
pow(2,1)= 2
pow(2,2)= 4
pow(2,3)= 8
pow(2,4)= 16
pow(2,5)= 32*/

#include <stdio.h>
#define x 2
float pows(int y);

int main()
{
    int y;
    int i;
    printf("Enter n:");
    scanf("%d",&y);
    for(i=0;i<=y;i++)
    {
        printf("pow(2,%d)= %.0f\n",i,pows(i));
    }
    return 0;
}

float pows(int y)
{
    int i;
    float num=1;
    if(y==0)
    {
        return 1;
    }
    else
    {
            for(i=1;i<=y;i++)
    {
        num*=2;
    }
    return num;
    }
}
