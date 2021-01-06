#include <stdio.h>
#define N 20
void main()
{
    int a[N]={0};
    int m,n,sum=0;
    int i,j,flag=0,x,c,b,temp;
    printf("Please enter requried terms (<=10):");
    scanf("%d",&n);
    printf("                             their sum:");
    scanf("%d",&m);
    printf("There are following possible series:\n");
    for(i=0;i<n-1;i++)
    {
        a[i]=1;
    }
    a[i]=m-n+1;
    for(i=n-1;i>=0;i--)
    {
        printf("%3d",a[i]);
    }
    printf("\n");
    while(!flag)
    {
        for(i=n-1;i>=0;i--)
        {
            if(a[i]<=a[i-1]+1)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    x=i;
                    break;
                }
        }
            if(flag==0)
            {
                a[x]--;
                a[x-1]++;
                for(c=0;c<n-1;c++)
                {
                    for(b=c+1;b<n;b++)
                    {
                        if(a[c]>a[b])
                        {
                            temp=a[c];
                            a[c]=a[b];
                            a[b]=temp;
                        }
                    }
                }
                for(j=n-1;j>=0;j--)
                {
                    printf("%3d",a[j]);
                }
                printf("\n");
            }
    }
    if(a[n-1]==a[n-2])
    {
        for(i=n-1;i>=0;i--)
    {
        if(a[n-2]>a[i]+1)
        {
            a[n-2]--;
            a[i]++;
        }
    }
    for(j=n-1;j>=0;j--)
                {
                    printf("%3d",a[j]);
                }
                printf("\n");
    }
}
/*满足特异条件的数列。输入m和n（20≥m≥n≥0），求出满足以下方程式的正整数数列i1,i2,…,in，使得i1+i2+…+in=m，且i1≥i2≥…≥in。例如：
当n=4，m=8时，将得到如下5个数列：
5 1 1 1  4 2 1 1  3 3 1 1  3 2 2 1  2 2 2 2
**输入格式要求："%d" 提示信息："Please enter requried terms (<=10):"
                               "                             their sum:"
**输出格式要求："There are following possible series:\n" "[%d]:" "%d"*/
