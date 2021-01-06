#include <stdio.h>
#define N 5

typedef struct order
{
    int score;
}STU;


void input(STU a[]);
void compare(STU a[]);
void print(STU a[]);


int main(void)
{
    STU a[N];
    input(a);
    compare(a);
    print(a);
}

void input(STU a[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("Input the score:\n");
        scanf("%d",&a[i].score);
    }
}
void compare(STU a[])
{
    int i,j;
    STU temp;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i].score<a[j].score)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void print(STU a[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%3d",a[i].score);
    }
}
