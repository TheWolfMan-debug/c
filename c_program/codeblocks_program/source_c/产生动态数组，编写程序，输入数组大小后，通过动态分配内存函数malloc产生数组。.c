#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    p=(int *)malloc((n)*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("array[i]=%d\n",i*10);
    }
    return 0;
}
/*������̬���飬��д�������������С��ͨ����̬�����ڴ溯��malloc�������顣
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter array size:"
**�����ʽҪ��"array[%d]=%d\n"
��������ʾ�����£�
Enter array size:8
array[0]=0
array[1]=10
array[2]=20
array[3]=30
array[4]=40
array[5]=50
array[6]=60*/
