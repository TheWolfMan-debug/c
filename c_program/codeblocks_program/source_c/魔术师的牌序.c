#include <stdio.h>
int main()
{
    int a[14],i,j=1,n;
    for(i=1;i<=13;i++)
    {
        n=1;
        do
        {
            if(j>13)
                j=1;
            if(a[i])
                j++;
            else
            {
                if(n==1)
                    a[j]=i;
                j++;
                n++;
            }
        }while(n<=i);
    }
    for(i=1;i<=13;i++)
        printf("%d",a[i]);
    return 0;
}
