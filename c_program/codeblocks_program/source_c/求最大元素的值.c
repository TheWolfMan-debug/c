/*��һ��3*4�ľ��������е����Ԫ�ص�ֵ��

**������ʾ��"������3*4����\n"
**�����ʽ��"%d"
**�����ʽҪ��"max value is %d\n"

��������ʾ�����£�
������3*4����
1 3 5 7
2 4 6 8
15 17 34 12
max value is 34*/
#include <stdio.h>
#define N 3
#define M 4

int main()
{
    int i,a[N*M];
    int max;
    printf("������3*4����\n");
    for(i=0;i<N*M;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<N*M;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("max value is %d\n",max);
    return 0;
}
