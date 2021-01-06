#include <stdio.h>

int main()
{
    int sum=0,i;
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum+=i;
    }
    printf("sum = %d",sum);
}
