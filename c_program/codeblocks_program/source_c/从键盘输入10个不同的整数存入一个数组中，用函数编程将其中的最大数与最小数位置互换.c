/*Ҫ�󣺴Ӽ�������10����ͬ����������һ�������У��ú�����̽����е����������С��λ�û�����
�ֱ��������֮ǰ���ֵ����Сֵ�����������е�λ��,�Լ������������


������ʾ��Ϣ��"Input 10 numbers:"
�����ʽ��"%d"
���ֵ�����ʾ��Ϣ��"Max element position:%d,Max element:%d\n"
��Сֵ�����ʾ��Ϣ��"Min element position:%d,Min element:%d\n"
���������ʾ��Ϣ��"Exchange results:"
���������ʽ��"%4d"
�������н��ʾ����
Input 10 numbers:5 1 6 4 3 6 10 4 7 9
Max element position:6,Max element:10�L
Min element position:1,Min element:1�L*/

#include <stdio.h>
#define N 10

int main()
{
    int i,temp,a[N],max,min,maxf,minf;
    printf("Input 10 numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0],min=a[0];
    maxf=0,minf=0;
    for(i=0;i<N;i++)
    {
        if(max<a[i])
        {
            max=a[i];
            maxf=i;
        }
        if(min>a[i])
        {
            min=a[i];
            minf=i;
        }
    }
    temp=a[minf];
    a[minf]=a[maxf];
    a[maxf]=temp;
    printf("Max element position:%d,Max element:%d\n",maxf,max);
    printf("Min element position:%d,Min element:%d\n",minf,min);
    printf("Exchange results:");
    for(i=0;i<N;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
