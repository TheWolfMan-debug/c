/*��д�������һ������10������������������������ƽ��ֵ��ƽ��ֵ����Ϊ˫���ȸ���������
��main����������ѭ������10��������������һ�������У������ֵ��Ȼ�������������
***������ʾ��Ϣ��"Please input ten integers:\n"
***ÿ�������������ʽҪ��"%d"
***�����ʽҪ��"The mean value is %.2f\n"*/

#include <stdio.h>
#define N 10

int main()
{
    int a[N];
    double aver=0;
    int i;
    printf("Please input ten integers:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        aver+=a[i];
    }
    printf("The mean value is %.2f\n",aver/10);
    return 0;
}
