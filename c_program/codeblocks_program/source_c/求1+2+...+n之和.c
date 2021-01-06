#include <stdio.h>

unsigned long fun(int n);

int main()
{
    int n;
    unsigned long  sum = 0;
    printf("Input n:");
    scanf("%d", &n);
    while (n)
    {
        sum += fun(n--);
    }
    printf("The sum is :%u", sum);
    return 0;
}

unsigned long fun(int n)
{
    unsigned long  m_sum = 0;
    m_sum += n;
    return m_sum;
}
