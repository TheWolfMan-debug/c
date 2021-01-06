/*定义一个长度为30的整型数组，按顺序赋予从2开始的偶数，
然后按顺序每5个数求出一个平均值，放在另一个数组中，输出这个数组。
**输出格式要求："%6d"
程序的运行示例如下：
     6    16    26    36    46    56*/

#include <stdio.h>
#define N 30
int main()
{
    int a[N],b[N/5],sum=0;
    int i,j,k=0;
    for(i=0;i<N;i++)
    {
        a[i]=2*i+2;
    }
    for(i=0;i<N;i+=5)
    {
        sum=0;
        for(j=i;j<i+5;j++)
        {
            sum+=a[j];
        }
        b[k]=sum/5;
        k++;
    }
    for(i=0;i<N/5;i++)
    {
        printf("%6d",b[i]);
    }
    return 0;
}
