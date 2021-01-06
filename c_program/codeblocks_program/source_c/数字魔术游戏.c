#include <stdio.h>
int main()
{
    int a,b,c;
    int n,find=0;
    printf("Input a sum:");
    scanf("%d",&n);
    for(a=1;a<10;a++)
        {
            for(b=1;b<10;b++)
            {
                for(c=1;c<10;c++)
                {
                    if(n==100*(a+b*2+c*2)+10*(b+a*2+c*2)+a*2+b*2+c)
                    {
                        find=1;
                        printf("The number is %d\n",a*100+b*10+c);

                    }
                }
            }
        }
        if(find==0)
        {
            printf("The sum you calculated is wrong!\n");
        }
    return 0;
}
/*在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，则魔术师一定能猜出观众心里想的原数abc是多少。例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443，而观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。
**输入格式要求："%d"  提示信息："Input a sum:"
**输出格式要求："The sum you calculated is wrong!\n"  "The number is %d\n"
程序运行示例如下：
Input a sum:1999
The number is 443*/
