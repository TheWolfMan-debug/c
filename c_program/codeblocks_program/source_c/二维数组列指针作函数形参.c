#include <stdio.h>
void inputarray(int *p,int m,int n);
void outputarray(int *p,int m,int n);
int main()
{
    int a[3][4];
    printf("input 3*4 numbers:\n");
    inputarray(*a,3,4);
    outputarray(*a,3,4);
    return 0;
}
void inputarray(int *p,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&p[i*n+j]);
        }

    }
}
void outputarray(int *p,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",p[i*n+j]);
        }
        printf("\n");

    }
}
