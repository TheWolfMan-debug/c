#include <stdio.h>

union Data
{
    int i;
    float f;
    char str[9];
}data;

int main()
{
    char str1[9];
    double c;
    printf("%d\n",sizeof(union Data));
    printf("%d\n%d\n",sizeof(str1),sizeof(c));
    return 0;
}
