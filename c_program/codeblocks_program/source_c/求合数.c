/*�����ܱ�ʾ1~23��5��������
 ��֪���������ͬ��������֮��Ϊ23���Ҵ������������ѡ���ɸ����������Ա�ʾ��1
 ��23֮�ڵ�ȫ����Ȼ�����������������ʲô��
**�����ʽҪ����ʾ��Ϣ��"There are following possible result:\n"
**�����ʽҪ��"[%d]:%d,%d,%d,%d,%d\n"
��������ʾ�����£�
There are following possible result:
[1]:1,2,3,5,12
[2]:1,2,3,6,11
[3]:1,2,3,7,10
[4]:1,2,4,5,11
[5]:1,2,4,6,10
[6]:1,2,4,7,9

#include <stdio.h>
#define N 5

int main()
{
    int a[N]={0};
    int sum=0,i,j,flag,k=0;
    for(i=1;i<=23;i++)
    {
        for(j=0;j<N;j++)
        {
            sum+=a[N];
        }
        for(j=0;j<N;j++)
        {
            if(sum!=i)
            {
                sum-=a[j];
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            a[k]=i;
            k++;
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%2d",a[i]);
    }
    return 0;
}*/


#include<stdio.h>
int main()
{
    int a, b, c, d, e, i, j, k, l, m, x, count = 0, f = 0;
    printf("There are following possble result:\n");
    for (a = 1; a <= 23; a++)
      for (b = 1 + a; b <= 23 - a; b++)
        for (c = 1 + b; c <= 23 - a - b;c++)
          for (d = 1 + c; d <= 23 - a - b - c; d++)
          {
              f = 1;
              if (( e = 23 - a - b - c - d) > d)
                  for ( f = 0, x = 1; x < 24 && !f; x++)
                    for (f = 1, i = 0; i < 2 && f; i++)
                      for (j = 0; j < 2 && f; j++)
                        for (k = 0; k < 2 && f; k++)
                          for (l = 0; l < 2 && f; l++)
                            for (m = 0;m < 2 && f; m++)
                              if (x == a*i + b*j + c*k + d*l + e*m)
                                  f=0;
                              if(!f)
                                  printf("[%d]: %d %d %d %d %d\n", ++count, a, b, c, d, e);
          }
    return 0;
}
