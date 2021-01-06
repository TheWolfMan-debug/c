/*下面程序用于利用π/2 = 2/1 * 2/3 * 4/3 * 4/5 * 6/5 * 6/7 *... 前200项之积，编程计算π找出以下程序中的3处错误，并改正之。

#include<stdio.h>
main()
{
    double term, result;
    int n;
    for (n = 2; n < 200; n++)
    {
        term =(n * n)/(n - 1) * (n + 1);
        result = result * term;
    }
    printf("result = %f\n", 2*result);
}*/

#include <stdio.h>

void main()
{
    double term, result=1;
    int n;
    for (n = 2; n <= 100; n += 2)
    {
        term =(double)(n * n)/( (n - 1) * (n + 1) );
        result = result * term;
    }
    printf("result = %f\n", 2*result);
}
