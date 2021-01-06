#include <stdio.h>
int main()
{
    int a[3][3];
    int i,j,max,l=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        if(max<a[i][i])
        {
            max=a[i][i];
            l=i;
        }
    }
    printf("max=%d ,row=%d",max,l);
    return 0;
}
