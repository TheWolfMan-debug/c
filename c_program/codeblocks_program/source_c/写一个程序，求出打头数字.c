/*写一个程序，输入为一个整数，输出为该整数的打头数字。例如123的打头数字为1，-123的打头数字为-1。

**输入格式要求："%d" 提示信息："请输入一个整数："
**输出格式要求："该整数以%d打头！\n"*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    while(fabs(n)>9)
    {
        n/=10;
    }
    printf("该整数以%d打头！\n",n);
    return 0;
}
