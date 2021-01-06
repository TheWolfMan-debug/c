#include <stdio.h>
int s(int n);
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    if(s(n)!=0)
    {
        s(n);
    }
    return 0;
}
int s(int n)
{
    int i;
    if(n!=0)
    {
        i=n%10;
        n=n/10;
        printf("%d",i);
        return s(n);
    }
}
