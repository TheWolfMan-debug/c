#include <stdio.h>
int main()
{
    int a[3][2]={{1,1},{3,3},{5,5}};
    int i,j;
    int (*p)[2];
    p=a;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("input a[%d][%d]:",i,j);
            scanf("%d",*(p+i)+j);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(*(p+i)+j));
        }
        printf("\n");
    }
    /*for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            //printf("%d\n",a[i][j]);
            //printf("%d\n",*(a[i]+j));
            //printf("%d\n",*(*(a+i)+j));
            //printf("%d\n",(*(a+i))[j]);
        }
    }
    //printf("%p\n",&a[0]);
    //printf("%p\n",a);
    //printf("%p\n",&a[0][0]);
    printf("%d\n",*a[0]);
    //printf("%d\n",sizeof(a[0]));
    //printf("%d\n",sizeof(a[0][0]));
    //printf("%p",&(&a[0][0]));*/
    return 0;
}
/*#include <stdio.h>
int main()
{
    int a[3][2]={{1,2},{3,4},{5,6}};
    int *p=*a;
    int i,j;
    printf("%p\n",a);
    printf("%p\n",p);
    printf("%p\n",*a);
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("input a[%d][%d]:",i,j);
            scanf("%d",&p[i*2+j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",p[i*2+j]);
        }
        printf("\n");
    }
    return 0;
}*/
