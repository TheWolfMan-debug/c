#include <stdio.h>
int main()
{
    int a[20],i;
    for(i=0;i<20;i++)
    {
        a[i]=i*3+2;
        printf("%3d",a[i]);
    }
    return 0;
}
