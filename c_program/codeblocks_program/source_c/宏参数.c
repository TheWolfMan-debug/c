#include <stdio.h>
#define A(a,b) (a>b)?a:b

void main()
{
    printf("result=%.2f\n",A(8,2)*5.0);
    printf("result=%.2f\n",(8>2)?8:2*5.0);
}
