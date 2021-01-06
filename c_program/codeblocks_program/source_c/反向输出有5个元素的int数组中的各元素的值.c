#include <stdio.h>
int main()
{
    int i,a[5]={10,20,30,40,50};
    for(i=4;i>=0;i--)
    {
        printf("\ta[%d]=%d,",i,a[i]);
    }
    return 0;
}
