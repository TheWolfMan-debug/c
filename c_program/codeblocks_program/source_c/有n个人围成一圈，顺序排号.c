#include <stdio.h>
#include <stdlib.h>
void sortpeople(int n,int start,int a,int b);
int main()
{
    int n;
    printf("������������");
    scanf("%d",&n);
    sortpeople(n,0,0,3);
    return 0;
}
void sortpeople(int n,int start,int a,int b)
{
    int i=0,call_i,out_i,*p;
    p=(int *)calloc(n,sizeof(int));
    for(; i<n;i++)
    {
        *(p+i)=i+1;
    }
    i=start;
    call_i=a-i;
    out_i=0;
    while(out_i<n-1)
    {
        if(*(p+i)!=0)
            call_i++;
        if(call_i==b)
        {
        out_i++;
        printf("��%d�����ֵ����ǣ�%d\n",out_i,p[i]);
        *(p+i)=0;
        call_i=0;
        }
    i++;
    if(i==n)
        i=0;
    }
    while(*p==0)
    {
        p++;
    }
    printf("%d������������µ��ǵ�%d�š�",n,*p);
    free(p);
}
