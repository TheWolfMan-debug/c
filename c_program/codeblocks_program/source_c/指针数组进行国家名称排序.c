#include <stdio.h>
#include <string.h>
#define max_len 10
#define N 150
void sortstring(char *ptr[],int n);
int main()
{
    int i,n;
    char name[N][max_len];
    char *pstr[N];
    scanf("%d",&n);
    getchar();
    printf("input their names:\n");
    for(i=0;i<n;i++)
    {

        pstr[i]=name[i];
        gets(pstr[i]);
    }
    sortstring(pstr,n);
    printf("sorted results:\n");
    for(i=0;i<n;i++)
    {
        puts(pstr[i]);
    }
    return 0;
}
void sortstring(char *ptr[],int n)
{
    int i,j;
    char *temp=NULL;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(ptr[j],ptr[i])<0)
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
