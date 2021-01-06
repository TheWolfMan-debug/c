/*用递归法将一个整数n转换成字符串，例如输入483，应输出字符串“483”。n的位数不确定，可以是任意位数的整数。
**输入提示："\n输入整数："
**输入格式："%d"
**输出提示："\n输出是："
**输出转换的字符串

程序的运行示例如下：
输入整数：345
输出是：345*/

#include <stdio.h>
#include <math.h>

int str(int n);

int main()
{
    int n;
    //printf("%d",(int)pow(10,0));
    printf("\n输入整数：");
    scanf("%d",&n);
    printf("\n输出是：");
    str(n);
    return 0;
}

int str(int n)
{
    int m,count=0,i;
    m=n;
    while(n)
    {
        count++;
        n/=10;
    }
    while(m)
    {
        //printf("%d",m);
        i=(int)pow(10,count-1);
        printf("%c",m/i+48);
        m=m%i;
        return str(m);
    }
}
