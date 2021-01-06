#include <stdio.h>
int x=0,y=3;
int count=0;
void fun()
{
    static int y=1;
    x+=y++;
    count++;
}
void main()
{
    int i;
    for(i=1;i<4;i++)
    {
        fun();
        printf("%3d\n",count);
    }
    printf("%d,%d\n",x,y);
}
