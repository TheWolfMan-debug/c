#include <stdio.h>
int main()
{
    int n;
    printf("input n:");
    scanf("%d",&n);
    int a[n];
    int i,j,t;
    for(i=0;i<n;i++)
    {
        printf("input array:");
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {

        printf("%d\t",*(a+i));
    }
    return 0;
}
