#include <stdio.h>
#define N 80
char mystrcat(char dststr[],char srcstr[]);
int main()
{
    char first[2*N];
    char second[N];
    printf("input the first string:");
    gets(first);
    printf("input the first string:");
    gets(second);
    mystrcat(first,second);
    return 0;
}
char mystrcat(char dststr[],char srcstr[])
{
    int i,sum=0,j;
    for(i=0;dststr[i]!='\0';i++)
    {
        sum++;
    }
    for(j=0,i=sum;srcstr[j]!='\0';i++,j++)
    {
        dststr[i]=srcstr[j];
    }
    dststr[i]='\0';
    puts(dststr);
}
