/*�Ӽ�����������10���������������У�����������ֵ����Сֵ�ĺ�,
���������͡�
**Ҫ��������ʾ��ϢΪ����������ʾ��Ϣ
**Ҫ�������ʽΪ��"%d"
**Ҫ�������ʽΪ��"sum=%3d"*/

#include <stdio.h>
#define N 3

int main()
{
    int a[N],max,min;
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<N;i++)
    {
        max=(max<a[i]?a[i]:max);
        min=(min>a[i]?a[i]:min);
    }
    printf("sum=%3d",max+min);
    return 0;
}
