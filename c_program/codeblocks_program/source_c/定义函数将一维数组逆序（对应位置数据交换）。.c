/*���庯����һά�������򣨶�Ӧλ�����ݽ�������
������������10��������Ȼ����ú�������������������Ľ����
������ʾ��"input 10 numbers:"
�����ʽ��"%d"
�����ʽ��"%5d"

�������н��ʾ����
input 10 numbers: 5 8 7 6 5 4 2 8 0 9
   9    0    8    2    4    5    6    7    8    5*/

#include <stdio.h>
#define N 10
int main()
{
    int a[N];
    int i;
    printf("input 10 numbers:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=N-1;i>-1;i--)
    {
        printf("%5d",a[i]);
    }
    return 0;
}
