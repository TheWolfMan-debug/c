#include <stdio.h>
#define N 24

void main()
{
    int i,count[N],max,min,max1=0,min1=0,sum=0;
    float rate[N];
    for(i=0;i<N;i++)
    {
        printf("请输入在%d:00和%d:00之间登录的用户数：",i,i+1);
        scanf("%d",&count[i]);
        sum+=count[i];
    }
    max=count[0],min=count[0];
    for(i=N-1;i>=0;i--)
    {
        if(max<count[i])
        {
            max=count[i];
            max1=i;
        }
        if(min>count[i])
        {
            min=count[i];
            min1=i;
        }
        rate[N-1]=(float)count[N-1]/sum;
    }
    printf("   时间                 登录人数                 所占比例\n");
    for(i=0;i<N;i++)
    {
        printf("%2d:00 - %2d:00 %15d %25.1f\n",i,i+1,count[i],rate[i]);
    }
    printf("最大登录人数%d发生在%2d：00到%2d：00之间\n",max,max1,max1+1);
    printf("最小登录人数%d发生在%2d：00到%2d：00之间\n",min,min1,min1+1);
}

/*从键盘输入每小时登录网络的用户数到一个有24个整型元素的数组中。写一个程序以如下格式显示一个报告：
     时间			     登录人数		   所占比例
0:00 – 1:00        		1                   0.3
1:00 – 2:00             	2                   0.7
     …
10:00 - 11:00    		27                  9.0
11:00 - 12:00    		28                  9.3
     …
23:00 - 24:00    		8                   2.7
最大登录人数28发生在11：00到12：00之间
最小登录人数 1发生在  0：00到 1：00之间(两个时间段登录人数相同时，取排在前面的时间)

**输入格式要求："%d" 提示信息："请输入在%d:00和%d:00之间登录的用户数："
**输出格式要求：
"   时间                 登录人数                 所占比例\n"
"%2d:00 - %2d:00 %15d %25.1f\n"
"最大登录人数%d发生在%2d：00到%2d：00之间\n"
"最小登录人数%d发生在%2d：00到%2d：00之间\n"*/
