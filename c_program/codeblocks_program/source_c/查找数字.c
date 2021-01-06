#include <stdio.h>
int main()
{
    int a[5],i,x,flag=0,b;
    printf("Enter 5 integers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter x: ");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            b=i;
            break;
        }
    }
    if(flag==1)
    {
        printf("Index is %d\n",b);
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}
