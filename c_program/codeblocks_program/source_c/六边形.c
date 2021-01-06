#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter length:");
    scanf("%d",&n);
    /*第一行和最后一行*/{
        for(i=1;i<=n-1;i++)
    {
        printf(" ");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    }//第一行和最后一行！！！
    for(i=1;i<=n-1;i++)
    {
        for(j=n-i-1;j>=1;j--)
        {
            printf(" ");
        }
        printf("*");
        for(j=n+(i-1)*2;j>=1;j--)
        {
            printf(" ");
        }
        printf("*\n");
    }//前半部分
      for(i=n-2;i>=1;i--)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf(" ");
        }
        printf("*");
        for(j=1;j<=n+(i-1)*2;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }//后半部分
    /*第一行和最后一行*/{
        for(i=1;i<=n-1;i++)
    {
        printf(" ");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    }//第一行和最后一行！！！
    return 0;
}
