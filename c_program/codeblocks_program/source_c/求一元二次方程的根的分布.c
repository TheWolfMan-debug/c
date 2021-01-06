#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPS 1e-6

int main(void)
{
    float a,b,c,disc,p,q;
    printf("Please enter the coefficients a,v,c:");
    scanf("%f%f%f",&a,&b,&c);
    if(fabs(a)<=EPS)
    {
        printf("It is not a quadratic equation!\n");
        exit(0);
    }
    disc=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(fabs(disc))/(2*a);
    if(fabs(disc)<=EPS)
    {
        printf("x1=x2=%.2f\n",p);
    }
    else
    {
        if(disc>EPS)
        {
            printf("x1=%.2f,x2=%.2f\n",p+q,p-q);
        }
        else
        {
            printf("x1=%.2f+%.2fi, ",p,q);
            printf("x2=%.2f-%.2fi\n",p,q);
        }
    }
    return 0;
}
