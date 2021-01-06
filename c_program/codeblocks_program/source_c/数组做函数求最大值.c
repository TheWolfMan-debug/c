#include <stdio.h>
int FindMax(int num[], int n);

int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    FindMax(a,i);
    return 0;
}
int FindMax(int num[], int n)
{
    int max=num[0],i;
    for(i=0;i<n;i++)
    {
       if(max<num[i])
        max=num[i];
    }
    printf("max=%d\n",max);
}
