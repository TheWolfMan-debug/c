#include <stdio.h>
int f(int n)
{
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return f(n-1)+f(n-2);
}
int main()
{
    int n;
    printf("how many:");
    scanf("%d",&n);
    printf("Result=%d",f(n));
    return 0;
}
