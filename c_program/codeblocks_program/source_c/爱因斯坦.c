#include <stdio.h>
void main()
{
    int x,find;
    x=0;
    do
    {
        ++x;
        find=x%2==1&&x%3==2&&x%5==4&&x%6==5&&x%7==0;
    }while(!find);
    printf("x=%d\n",x);
}
