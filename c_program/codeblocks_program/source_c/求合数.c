/*和数能表示1~23的5个正整数
 已知五个互不相同的正整数之和为23，且从这五个数中挑选若干个加起来可以表示从1
 到23之内的全部自然数，问这五个数都是什么？
**输入格式要求：提示信息："There are following possible result:\n"
**输出格式要求："[%d]:%d,%d,%d,%d,%d\n"
程序运行示例如下：
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
