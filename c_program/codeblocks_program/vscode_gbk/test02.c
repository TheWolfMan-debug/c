#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sum = 0;
int m = 0;

void digitSum(int n)
{
    if (n != 0)
    {
        digitSum(n / 10);
        if (m == n)
        {
            printf("%d=", n % 10);
        }
        else
        {
            printf("%d+", n % 10);
        }
        }
    sum += n % 10;
}

int main()
{
    int n;
    scanf("%d", &n);
    m = n;
    digitSum(n);
    printf("%d\n", sum);
    system("pause");
    return 0;
}