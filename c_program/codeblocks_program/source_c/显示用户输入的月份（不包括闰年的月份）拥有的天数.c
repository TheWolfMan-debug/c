#include <stdio.h>
int main()
{
    int i,n,a[12]={31,28,30,30,31,30,31,31,30,30,30,31};
    do
    {
        printf("Input a month:");
        scanf("%d",&n);
    }while(n>12||n<1);
    for(i=0;i<12;i++)
    {
        if(n==i+1)
        {
            printf("The number of days is %d\n",a[i]);
        }
    }
    return 0;
}
