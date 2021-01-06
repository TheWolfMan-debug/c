#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,x,count=0,a[10],i;
	printf("Please enter the number:\n");
    scanf("%d",&n);
    x=fabs(n);//为了下面的输出以及负数的出现而做出的绝对值赋值
    for(i=0;i<=9;i++) //初始化数组
		a[i]=0;
    while(x!=0)//这个外循环是为了判断输入数据的位数
    {
        for(i=0;i<=9;i++)//内层循环是为了计算每个位数的数出现的次数
        {
            if (x%10==i)
				a[i]++;
        }
		x/=10;
        count++;
    }
	printf("%d: %d bits\n",n,count);
    for(i=0;i<=9;i++)//循环输出打印
    {
        if (a[i] != 0)//筛选输出
			printf("%d: %d\n",i,a[i]);
    }

	system("pause");
	return 0;
}
