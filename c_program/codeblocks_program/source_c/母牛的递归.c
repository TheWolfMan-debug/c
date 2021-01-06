/*问题 1004: [递归]母牛的故事
时间限制: 1Sec 内存限制: 128MB 提交: 39595 解决: 11840
题目描述
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
输入
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。
输出
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。
样例输入
2
4
5
0
样例输出
2
4
6*/

/*规律
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

void monther_cow2(int n)//记录的斐波那契数列中对应的规律到数列
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
