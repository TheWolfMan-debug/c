/*该存多少钱？假设银行一年整存零取的月息为0.63%（年息为12*0.63%，年息按复利计算）。
现在某人手中有一笔钱，他打算在今后的五年中每年的年底取出1000元，到第五年时刚好取完，
请算出他存钱时应存入多少。
**输出格式要求："He must save %.2f at first.\n"*/

#include <stdio.h>
int main()
{
    float sum=1000,x,rate;
    int i;
    rate=1+12*0.0063;
    for(i=0;i<5;i++)
    {
        sum=sum/rate+1000;
    }
    printf("He must save %.2f at first.\n",sum-1000);
    return 0;
}
