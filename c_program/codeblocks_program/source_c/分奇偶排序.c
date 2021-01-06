#include <stdio.h>
#define N 5
int main()
{
    int a[N];
    int i,j;
    int temp;
    printf("Input 10 numbers:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Output: ");
    for(i=0;i<N;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d,",a[i]);
        }
    }
    for(i=0;i<N;i++)
    {
        if(a[i]%2==0)
        {
            if(i<N-1)
                printf("%d,",a[i]);
            else
                printf("%d\n",a[i]);
        }
    }
    return 0;
}
