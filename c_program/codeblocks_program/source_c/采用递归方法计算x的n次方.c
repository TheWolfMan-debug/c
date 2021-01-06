#include <stdio.h>
int d(int a,int b);
int main()
{
    int a,b;
    printf("x=? n=?");
    scanf("%d%d",&a,&b);
    printf("%d**%d=%d\n",a,b,d(a,b));
    return 0;
}
int d(int a,int b)
{
    if(b==1)
    {
        return a;
    }
    else
    {
        return a*d(a,b-1);
    }
}
