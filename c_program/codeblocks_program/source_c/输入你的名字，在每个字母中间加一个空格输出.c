/*дһ������������������Ȼ��ÿ����ĸ���һ���ո����������磬����John��ʾΪJ o h n��

**�����ʽҪ��"%s"  ��ʾ��Ϣ��"���������������"*/

#include <stdio.h>
#define N 20

int main()
{
    char a[N];
    int i;
    printf("���������������");
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        printf("%c",a[i]);
        printf(" ");
    }
    return 0;
}
