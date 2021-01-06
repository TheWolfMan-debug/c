/*求500以内的10个最大素数及其和并分别输出。
程序的运行示例如下：
   499   491   487   479   467   463   461   457   449   443
 sum=4696
 ***输出数据格式***："%6d"
                   "\n sum=%d\n"  */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int isPrime(int n)
{
    int i;
    int flag = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i, j = 0, sum = 0;
    for (i = 500; i > 2; i--)
    {
        if (isPrime(i))
        {
            if (j == 10)
            {
                break;
            }
            else
            {
                printf("%6d", i);
                sum += i;
                j++;
            }
        }
    }
    printf("\n sum=%d\n", sum);
    system("pause");
    return 0;
}
