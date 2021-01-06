/*捕鱼和分鱼。ABCDE五人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，
于是各自找地方睡觉。日上三竿，A第一个醒来，将鱼分为5份，把多余的1条鱼扔掉，
拿走自己的1份。B第二个本来，也将鱼分5份，把多余的1条鱼扔掉，拿走自己的1份。
CDE依次醒来，也按同样的方法拿鱼。问他们合伙至少捕了多少条鱼？
**输出格式要求："Total number of fish catched=%d\n"*/

#include <stdio.h>
int main()
{
    int i,j;
    int x,count=0;
    int flag;
    for(i=6;i<4000;i++)
    {
        flag=1;
        x=i;
        for(j=0;j<5;j++)
        {
            x--;
            if(x%5!=0)
            {
                flag=0;
                break;
            }
            count++;
            x=4*x/5;
        }
        if(flag==1)
        {
            break;
        }
    }
    printf("Total number of fish catched=%d\n",i);
    return 0;
}

/*#include<stdio.h>

void main()

{

    int n,i,x,flag=1;          //flag：控制标记

    for(n=6;flag;n++)          //采用试探的方法。令试探值n逐步加大

    {

        for(x=n,i=1;i<=5;i++)

            if((x-1)%5==0) x=4*(x-1)/5;

            else  flag=0;        //      若不能分配则置标记falg=0退出分配过程

        if(flag) break;            //  若分配过程正常结束则找到结果退出试探的过程

        else flag=1;                 // 否则继续试探下一个数

    }

    printf("Total number of fish catched=%d\n",n);     //输出结果

}*/
