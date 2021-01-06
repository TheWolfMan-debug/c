#include <stdio.h>
#include <math.h>
long fexp(int num);
int main()
{
    int i,n;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d! = %ld\n",i,fexp(i));
    }
    return 0;
}
long fexp(int num)
{
    static int sum=1;
    sum*=num;
    return sum;
}
