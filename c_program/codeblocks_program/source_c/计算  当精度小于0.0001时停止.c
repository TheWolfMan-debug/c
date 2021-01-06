#include <stdio.h>
#define N 0.001
int main()
{
    double i=1;
    int n=1;
    double sum=0;
    for(n=2; ;n++)
    {
        if((double)i/(n*2-1)<N)
        {
            break;
        }
        if(n%2==0)
        {
            sum+=-i/(n*2-1);
        }
        else
        {
            sum+=i/(n*2-2);
        }

    }
    printf("%f",sum+1);
    return 0;
}
