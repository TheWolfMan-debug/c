#include <stdio.h>
#define N 40
int average(int score[],int n);
void readscore(int score[],int n);
int main()
{
    int score[N],aver,n;
    printf("input n:");
    scanf("%d",&n);
    readscore(score,n);
    aver=average(score,n);
    printf("average score is %d\n",aver);
    return 0;
}
int average(int score[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return sum/n;
}
void readscore(int score[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("input score:");
        scanf("%d",&score[i]);
    }
}
