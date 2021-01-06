#include <stdio.h>
int main()
{
    int i,j,k,a;
    for(i=1;i<=20;i++)
        for(j=1;j<=20;j++)
        for(k=1;k<=20;k++)
        {
            if(a!=i+j+k)
            {
                if((i+j>k)&&(j+k>i)&&(k+i>j)&&(j*j+i*i==k*k)&&(i<j))
            {
                printf("a=%d\tb=%d\tc=%d\n",i,j,k);
                a=i+j+k;
            }
            }
        }
    return 0;
}
