/*ð�����򷨡�����N��NΪ5�������������������Ҫ����N��������С��������������
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter No.%2d:"
**�����ʽҪ��"%d"
��������ʾ�����£�
Enter No. 1:5
Enter No. 2:7
Enter No. 3:3
Enter No. 4:9
Enter No. 5:8
35789*/

#include <stdio.h>
#define N 5
int main()
{
    int a[N],i,j,temp;
    for(i=0;i<N;i++)
    {
        printf("Enter No.%2d:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
