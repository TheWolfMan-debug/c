#include <stdio.h>
int main()
{
    int a[10],b[9],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        b[i]=a[i]*a[i+1];
    }
    for(i=0;i<9;i++)
    {
        printf("%3d",b[i]);
    }
    return 0;
}
