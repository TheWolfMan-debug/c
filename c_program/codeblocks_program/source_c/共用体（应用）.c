#include <stdio.h>
#define N 3

union sample
{
    int i;
    float f;
};
typedef union sample SAMPLE;
int main(void)
{
    printf("bytes=%d\n",sizeof(SAMPLE));
    printf("bytes=%d\n",sizeof(float));
    SAMPLE a[N];
    a[0].i=1;
    a[1].f=1.5;
    a[2].f=2.5;
    printf("%d %f %f",a[0].i,a[1].f,a[2].f);

}
