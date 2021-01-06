#include <stdio.h>
int main()
{
    int a[8],i,flag;
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        if(a[i]!=a[7-i])
        {
            flag=0;
        }
    }
    if(flag!=0)
    {
        printf("yes,it is\n");
    }
    else
    {
        printf("no,it is not\n");
    }
    return 0;
}
