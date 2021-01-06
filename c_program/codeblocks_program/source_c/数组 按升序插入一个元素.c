#include <stdio.h>
int s(int a[],int n);
int main()
{
    int n,i;
    printf("Input array size:\n");
    scanf("%d",&n);
    int a[n];
    printf("Input array:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    s(a,n);
    return 0;
}
int s(int a[],int n)
{
    int x,i,j,tem;
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
    }
    printf("Input x:\n");
    scanf("%d",&x);
    for(i=n-1;i>=0;i--)
    {
        if(x<a[i])
        {
            a[i+1]=a[i];
            continue;
        }
        else
        {
            a[i+1]=x;
            break;
        }
    }
    printf("After insert %d:\n");
    for(i=0;i<n+1;i++)
    {
        printf("%4d",a[i]);
    }
}

