#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<20;i++)
    {
        for(j=0;j<=33;j++)
        {
            for(k=0;k<=300;k++)
            {
                if(i+j+k==100&&i*5+j*3+k/3==100&&k%3==0)
                {
                    printf("公鸡是%d只，母鸡是%d只，雏鸡是%d只.\n",i,j,k);
                }
            }
        }
    }
    return 0;
}
