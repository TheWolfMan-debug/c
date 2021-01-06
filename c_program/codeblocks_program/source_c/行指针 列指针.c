#include <stdio.h>
#include <string.h>

void main()
{
    int i;
    char str[3][10]={"abc","def","ijk"};
    char (*p)[10]=str;
    puts(*p);
    for(i=0;i<3;i++)
    {
        p=str+i;
        puts(*p);
    }
}
