#include <stdio.h>
int main()
{
    int a[5],j,i,tem;
    for(i=0;i<5;i++)
    {
        printf("Enter No.%2d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i;j<5;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[j];
                a[j]=a[i];
                a[i]=tem;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
