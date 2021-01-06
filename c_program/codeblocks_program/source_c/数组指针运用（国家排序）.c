#include <stdio.h>
#include <string.h>
#define MAX_LEN 10
#define N 150

void SortString(char *ptr[],int n);

int main(void)
{
    int i,n;
    char name[N][MAX_LEN];
    char *pStr[N];
    printf("How many countries?");
    scanf("%d",&n);
    getchar();
    printf("Input their names:\n");
    for(i=0;i<n;i++)
    {
        /*pStr[i]=name[i];
        gets(pStr[i]);*/
        gets(name[i]);
        pStr[i]=name[i];
    }
    SortString(pStr,n);
    printf("Sorted results:\n");
    for(i=0;i<n;i++)
    {
        puts(pStr[i]);
    }

    return 0;
}

void SortString(char *ptr[],int n)
{
    int i,j;
    char *temp =NULL;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(ptr[j],ptr[i])<0)
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
