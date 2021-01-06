#include <stdio.h>
#include <math.h>

int main()
{
    int l,i,j,k,a[10]={-1,0,0,0,0,0,0,0,0,0},n,ret,count=-1;
    printf("Please enter the number:\n");
    scanf("%d",&n);
    l=n;
    k=fabs(n);
    i=fabs(n);
    while(i!=0||k!=0)
    {

        count++;
        i=k%10;
    if(i==0)
    {
        a[0]++;
    }
    else    if(i==1)
    {
        a[1]++;
    }
    else    if(i==2)
    {
        a[2]++;
    }
    else    if(i==3)
    {
        a[3]++;
    }
    else    if(i==4)
    {
        a[4]++;
    }
    else    if(i==5)
    {
        a[5]++;
    }
    else    if(i==6)
    {
        a[6]++;
    }
    else    if(i==7)
    {
        a[7]++;
    }
    else    if(i==8)
    {
        a[8]++;
    }
        if(i==9)
    {
        a[9]++;
    }
    k/=10;
        }
    printf("%d: %d bits\n",l,count++);
    for(j=0;j<=9;j++)
    {
        if(a[j]!=0)
            printf("%d: %d\n",j,a[j]);
    }
    return 0;
}
