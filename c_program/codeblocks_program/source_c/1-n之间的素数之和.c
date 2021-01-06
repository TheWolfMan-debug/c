#include <stdio.h>
int main()
{
    int n,i,j,t,l;
    int sum=0;
    printf("Input n:");
    scanf("%d",&n);
    l=n;
    for( ;n>=2;n--)
    {
        for(i=2;i<n;i++)
        {
            if(n%i!=0)
                {
                    t=1;
                }
            else
            {
                t=2;
                break;
            }
        }
        if(t==1)
        {
            sum+=n;
        }
    }
    printf("sum = %d\n",sum);
    return 0;
}
