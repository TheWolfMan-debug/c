/*���� 1004: [�ݹ�]ĸţ�Ĺ���
ʱ������: 1Sec �ڴ�����: 128MB �ύ: 39595 ���: 11840
��Ŀ����
��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
����
���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0<n<55)��n�ĺ�������Ŀ��������
n=0��ʾ�������ݵĽ�������������
���
����ÿ������ʵ��������ڵ�n���ʱ��ĸţ��������
ÿ�����ռһ�С�
��������
2
4
5
0
�������
2
4
6*/

/*����
1 2 3 4 5 6  7  8  9
1 2 3 5 6 8 13 19*/



#include<stdio.h>
#define N 55
int monther_cow[N];
void monther_cow2(int n);

int main()
{
   int input[N];
   monther_cow2(N);
   int i = 0;
    do
    {
        scanf("%d",&input[i]);
    }while(input[i++] != 0);

    for(int j = 0 ; j < i-1 ; j++)
    {
        if( input[j] < 4)
        {
            printf("%d\n",monther_cow[input[j]]);
        }

        else
        {
            printf("%d\n",monther_cow[input[j] - 1] + monther_cow[input[j] - 3] );
        }
    }
    return 0;
}

void monther_cow2(int n)//��¼��쳲����������ж�Ӧ�Ĺ��ɵ�����
{
    int i;
    for(i = 1 ; i <= n ; i++)
    {
        if( i < 4)
        {
            monther_cow[i] = i;
        }
        else
        {
            monther_cow[i] = monther_cow[i - 1] + monther_cow[i - 3];
        }

    }
}
/*#include <stdio.h>
#define N 55

int s(int a);

int main()
{
    int n;
    int i=-1;
    int a[N];
    do
    {
        i++;
        scanf("%d",&a[i]);
    }while(a[i]!=0);
    n=i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",s(a[i]));
    }
    return 0;
}

int s(int a)
{
    int i=a;
        if(i<4)
        {
            if(i==1)
            {
                return 1;
            }
            if(i==2)
            {
                return 2;
            }
            if(i==3)
            {
                return 3;
            }
        }
        else
        {
            return s(a-1)+s(a-3);
        }
}
/*int s(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]<4)
        {
            if(a[i]==1)
            {
                return 1;
            }
            if(a[i]==2)
            {
                return 2;
            }
            if(a[i]==3)
            {
                return 3;
            }
        }
        else
        {
            return s(a[i-1],n-1)+s(a[i-3],n-1);
        }
    }
}
/*#include <stdio.h>
#define N 55

int s(int a);

int main()
{
    int i=-1;
    int a;
        i++;
        scanf("%d",&a);
    printf("%d",s(a));
    return 0;
}

int s(int a)
{
    int i=a;
        if(i<4)
        {
            if(i==1)
            {
                return 1;
            }
            if(i==2)
            {
                return 2;
            }
            if(i==3)
            {
                return 3;
            }
        }
        else
        {
            return s(a-1)+s(a-3);
        }
}*/
