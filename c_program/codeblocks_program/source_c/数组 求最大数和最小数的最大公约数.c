#include <stdio.h>
int main()
{
    int a[10],i,t,j,k,max,min;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            {
                max=a[i];
            }
        if(min>a[i])
            {
                min=a[i];
            }
    }
    j=max;
    k=min;
    do
    {
        t=j%k;
        j=k;
        k=t;

    }while(t!=0);
    printf("maxNum=%d\n",max);
    printf("minNum=%d\n",min);
    printf("%d",j);
    return 0;
}
