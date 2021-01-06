#include <stdio.h>
int main()
{
    int i,j,n,sum=0,num=1;
    printf("Input n:");
    scanf("%d",&n);
    int a[n][n];
    printf("Input %d*%d matrix:\n",n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==i||j+i==n-1)
                {
                    sum+=a[i][j];
                }
                if((j+i==n-1)||(j==i)&&(j%2==0)&&(i%2==0))
                {
                    num*=a[i][j];
                }
            }
        }
        printf("sum = %d\nproduct = %ld\n",sum,num);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==i||j+i==n-1)
                {
                    sum+=a[i][j];
                }
                if((j==i)||(j+i==n-1))
                {
                    if((j%2==0)&&(i%2==0))
                    {
                        num*=a[i][j];
                    }
                }
            }
        }
        printf("sum = %d\nproduct = %ld\n",sum,num);
    }
    return 0;
}
