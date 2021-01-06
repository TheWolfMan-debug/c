#include <stdio.h>
int main()
{
    float sum=0.0,a[10]={1.0,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};
    int i;
    for(i=0;i<10;i++)
    {
        sum+=a[i];
    }
    printf("The average of array is %f\n",(float)sum/10);
    return 0;
}
