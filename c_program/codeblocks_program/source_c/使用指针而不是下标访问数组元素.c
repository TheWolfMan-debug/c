#include <stdio.h>
int main()
{
    float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 } ;
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 } ;
    int mpl[5],i;/* Miles per litre. */
    float *p1=litres;
    float *p2=miles;
    int *p3=mpl;
    for(i=0;i<5;i++)
    {
        *p3=*p2/(*p1);
        printf("%d\t",*p3);
        p1++,p2++,p3++;

    }
    return 0;
}
