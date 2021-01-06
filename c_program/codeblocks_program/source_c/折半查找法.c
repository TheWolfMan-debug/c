#include <stdio.h>
int binsearch(long num[],long x,int n);
int myinput(long int num[],int n);
int order(long int num[],int n);
int main()
{
    int n,a,i;
    long int x;
    printf("how many the count of the arry:");
    scanf("%d",&n);
    long int num[n];
    myinput(num,n);
    order(num,n);
    printf("what you want to find:");
    scanf("%d",&x);
    a=binsearch(num,x,n);
    if(a!=-1)
    {
        printf("%d",a);
    }
    else
    {
        printf("no find!!!");
    }
    return 0;
}
int myinput(long int num[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("the num[%d] is:",i);
        scanf("%d",num+i);
    }
}
int order(long int num[],int n)
{
    int i,j,k,tem;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(num[k]>num[j])
                k=j;
        }
        if(k!=i)
        {
            tem=num[k];
            num[k]=num[i];
            num[i]=tem;
        }
    }
}
int binsearch(long num[],long x,int n)
{
    int low=0,high=n-1;
    long int mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(x>num[mid])
            low=mid+1;
        else if(x<num[mid])
        high=mid-1;
        else
            return mid;
    }
    return -1;
}
