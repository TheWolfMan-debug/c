#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[]="   123.5";
    int intnum;
    long longnum;
    double doublenum;
    intnum=atoi(str);
    longnum=atol(str);
    doublenum=atof(str);
    printf("intnum=%d\n",intnum);
    printf("longnum=%ld\n",longnum);
    printf("doublenum=%f\n",doublenum);
    return 0;
}
