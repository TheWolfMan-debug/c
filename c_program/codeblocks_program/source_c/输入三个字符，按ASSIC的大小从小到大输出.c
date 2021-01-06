#include<stdio.h>
int main()
{
    char str[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%c",&str[i]);
    }

    int j,k,l;
    j=(int)str[0];
    k=(int)str[1];
    l=(int)str[2];
    if(j>k)
    {
        if(k>l)
        {
            printf("%c %c %c",str[2],str[1],str[0]);
        }
        else
        {
            if(j>l)
            {
                printf("%c %c %c",str[1],str[2],str[0]);
            }
            else
            {
                printf("%c %c %c",str[1],str[0],str[2]);
            }
        }
    }
    else if(j<k)
    {
        if(k>l)
        {
            if(l<j)
            {
                printf("%c %c %c",str[2],str[0],str[1]);
            }
            else
            {
                printf("%c %c %c",str[0],str[2],str[1]);
            }
        }
        else if(l>k)
        {
            printf("%c %c %c",str[0],str[1],str[2]);
        }
    }
    return 0;
}
