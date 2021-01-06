#include <stdio.h>
int main()
{
    int a[10],b[10];
    int i,j=0;
    int temp;
    printf("Input 10 numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    j=0;
    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    printf("Output: ");
    for(i=0;i<10;i++)
    {
        if(i<9)
            printf("%d,",b[i]);
        else
            printf("%d\n",b[i]);
    }
    return 0;
}
