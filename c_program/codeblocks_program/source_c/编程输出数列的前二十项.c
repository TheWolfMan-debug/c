#include <stdio.h>
int main()
{
    int a[20]={1};
    int i;
    printf("%d",a[0]);
    for(i=1;i<20;i++)
    {
        if((i+1)%2==0)
        {
            a[i]=a[i-1]*2;
            printf(" %d",a[i]);
        }
        else
        {
            a[i]=a[i-1]*2+1;
            printf(" %d",a[i]);
        }
    }
    return 0;
}
