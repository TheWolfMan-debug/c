/*求1到10的阶乘。
**输出格式要求："  %2d!=%ld" 每行输出5个数的阶乘。
程序运行示例如下：
   1!=1   2!=2   3!=6   4!=24   5!=120
   6!=720   7!=5040   8!=40320   9!=362880  10!=3628800*/

#include <stdio.h>
int main()
{
    int i,n=10;
    long int num=1;
    for(i=1;i<=n;i++)
    {
        printf("%2d!=%ld",i,num*=i);
        if(i==5)
        {
            printf("\n");
        }
    }
    return 0;
}
