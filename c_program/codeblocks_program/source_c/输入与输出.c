#include <stdio.h>

int main()
{
    double b;
    unsigned short a = 65535;
    unsigned short k = a;
    int c, d;
    int f, g;

    b = (1234.0 - 1.0) / 10;
    scanf("%1d", &c);
    scanf("%d", &d);
    scanf("%c ", &f);
    scanf("%c", &g);
    printf("%d,%d,%c,%c,%f,%d", c, d , f, g, b, k);
    return 0;
}
