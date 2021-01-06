/*猴子吃桃程序_扩展2
猴子第一天摘了若干个桃子，吃了一半，不过瘾，又多吃了1个。第二天早上将剩余的桃子又吃掉一半，并且又多吃了1个。
此后每天都是吃掉前一天剩下的一半零一个。到第n天再想吃时，发现只剩下1个桃子，问第一天它摘了多少桃子？
为了加强交互性，由用户输入不同的天数n进行递推，即假设第n天的桃子数为1。
同时还要增加对用户输入数据的合法性验证（如:不允许输入的天数是0和负数）

程序运行结果示例：
Input days:
0↙
Input days:
-5↙
Input days:
a↙
Input days:
3↙
x=10

输入格式:"%d"
输出格式：
输入提示信息："Input days:\n"
输出："x=%d\n"*/
#include <stdio.h>

int monkey(int n);

int main()
{
    int n,ret;
    do{
        printf("Input days:\n");
        ret=scanf("%d",&n);
        while(ret!=1)
        {
            while(getchar()!='\n')  //此行代码用于清除缓冲区的内容
            printf("Input days:\n");
            ret=scanf("%d",&n);
        }
    }while(ret&&n<=0);
    printf("x=%d\n",monkey(n));
    return 0;
}
int monkey (int n)
{
    int i,j=1;
    for(i=1;i<n;i++)
    {
        j=2*(j+1);
    }
    return j;
}
