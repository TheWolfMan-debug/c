#include <stdio.h>
int main()
{
    int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
    int b,c,d;
    int i,sum=0;
    scanf("%d%d%d",&b,&c,&d);
    if(b%4==0&&b%100!=0||b%400==0)
    {
        for(i=0;i<c-1;i++)
        {
            sum+=a[1][i];
        }
        printf("%d",sum+d);
    }
    else
    {
        for(i=0;i<c-1;i++)
        {
            sum+=a[0][i];
        }
        printf("%d",sum+d);
    }
    return 0;
}
