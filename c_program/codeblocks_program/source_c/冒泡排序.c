/*ð������
����ð�ݷ������������򷨵Ļ���ԭ���ǣ��������е�n����ִ��n-1�����������ÿһ��ִ��ʱ����������ʣ�����δ�ź����Ԫ�ؽ������²����������ڵ�����Ԫ�ؽ��бȽϣ������ں������С������ǰ��������򽻻���λ�ã�����ÿһ������ж�������Ƚϵ����е���������������ĵײ�������n-1�������ͽ�ȫ��n��������С�����˳���ź����ˡ�
#define N 10
�����ĳ�����н�����£�
Input n:10�L
Input 10 numbers:2 9 3 4 0 6 8 7 5 1�L
Sorting results:   0   1   2   3   4   5   6   7  8  9

�����ʽ:"%d"
�����ʽ��
�������ݸ�����ʾ��"Input n:"
����������ʾ��"Input %d numbers:"
�����ʾ��"Sorting results:"
�����ʽ��"%4d"*/

/*#include <stdio.h>

int main()
{
    int n,i,j;
    int temp;
    printf("Input n:");
    scanf("%d",&n);
    int a[n];
    printf("Input %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorting results:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}*/
#include <stdio.h>
#define N 10
int main()
{
    int a[N]={2,17,8,3,24,53,82,1,29,101};
    int i,j,k,t;
    for(i=0;i<9;i++)
    {
        k=i;
        for(j=i+1;j<10;j++)
            {
            if(a[j]<a[k])
            {
                k=j;
            }
            }
            if(k!=i)
            {
                t=a[k];
                a[k]=a[i];
                a[i]=t;
            }
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}
