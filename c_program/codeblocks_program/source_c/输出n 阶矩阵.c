#include <stdio.h>
int main()
{
    int i,j;
    int n;
    printf("input how big the juzheng:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j+i)%2==0)
            {
                printf("%s","��");
            }
            else
            {
                printf("%s","Ů");
            }
        }
        printf("\n");
    }
    return 0;
}
