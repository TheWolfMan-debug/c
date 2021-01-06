/*#include <stdio.h>
int main()
{
    int a[5],i;
    printf("input five numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a[5],i;
    printf("input five numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%4d",*(a+i));
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a[5],i,*p;
    printf("input five numbers:");
    for(p=a;p<a+5;p++)
    {
        scanf("%d",p);
    }
    for(p=a;p<a+5;p++)
    {
        printf("%4d",*p);
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>
int main()
{
    int a[5],i,*p=NULL;
    printf("input five numbers:");
    p=a;
    for(i=0;i<5;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%4d",p[i]);
    }
    printf("\n");
    return 0;
}*/
