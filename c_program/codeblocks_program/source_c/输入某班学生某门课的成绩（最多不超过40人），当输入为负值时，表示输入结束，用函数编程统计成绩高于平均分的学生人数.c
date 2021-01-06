#include <stdio.h>
int Average(int score[], int n);
int GetAboveAver(int score[], int n);
int j=-1;
int main()
{
    int i=-1,s[40],aver;
    do
    {
        i++;
        scanf("%d",&s[i]);
        j++;
    }while(s[i]>=0);
    aver=Average(s,j);
    printf("Total students are %d\n",j);
    printf("Average score is %d\n",aver);
    printf("Students of above average is %d\n",GetAboveAver(s,aver));
    return 0;
}
int Average(int score[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return sum/n;
}
int GetAboveAver(int score[], int n)
{
    int i,num=0;
    for(i=0;i<j;i++)
    {
        if(score[i]>=n)
        {
            num++;
        }
    }
    return num;
}
