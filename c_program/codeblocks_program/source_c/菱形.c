#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=3-i;j>=0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(j=7-2*i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
