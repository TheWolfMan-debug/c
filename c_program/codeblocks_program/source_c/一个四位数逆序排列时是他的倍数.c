#include <stdio.h>
int main()
{
    int i;
    int a,b,c,d;
    int j;
    for(i=1000;i<10000;i++)
    {
        a=i/1000;
        b=i%1000/100;
        c=i%100/10;
        d=i%10;
        j=d*1000+c*100+b*10+a;
        if(j%i==0&&j!=i)
        {
            printf("%d\n",i);
        }
    }
}
