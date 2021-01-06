#include <stdio.h>
int main()
{
    int x,y;
    printf("Input x:");
    scanf("%d",&x);
    if(-5<=x&&x<=5)
    {
        y=-x;
    }
    else if(x==10)
    {
        y=100;
    }
    else if(-10<=x&&x<-5||x>5&&x<=10)
    {
        y=-x;
    }
    printf("f(%d)=%d",x,y);
    return 0;
}
