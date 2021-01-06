#include <stdio.h>
int main()
{
    int n,i,j,t,l;
    int sum=0;
    printf("Input n:");
    scanf("%d",&n);
    for( ;n>=2&&;n--)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                {
                    t=1;
                }
        }
        if(t!=1)
        {
            printf("sushu");
        }
    }
    return 0;
}
