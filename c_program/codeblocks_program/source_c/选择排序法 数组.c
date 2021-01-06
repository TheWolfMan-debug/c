#include <stdio.h>
int main()
{
    int n;
    printf("input n:");
    scanf("%d",&n);
    int a[n];
    int i,j,t,k;
    for(i=0;i<n;i++)
    {
        printf("input array:");
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
    }
    for(i=0;i<n;i++)
    {

        printf("%d\t",*(a+i));
    }
    return 0;
}
