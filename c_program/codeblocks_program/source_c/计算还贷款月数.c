#include <stdio.h>
#include <math.h>
#define d 300000
#define p 6000
#define r 0.01

int main()
{
    float m;
    m = ( log10(p) - log10(p-d*r) ) / log10(1+r);
    printf("%.1f\n",m);
    return 0;
}
