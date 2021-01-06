#include <stdio.h>
#define COUNT_SIZE 26
int main()
{
    char str1[4];
    int i,n,count[COUNT_SIZE]={0};
    printf("输入3个候选人的基本信息：姓名");
    gets(str1);
    printf("输入参加投票的人数:");
    scanf("%d",&n);
    char str2[n+1];
    getchar();
    printf("输入%d个参加投票人的投票情况",n);
    gets(str2);
    printf("输出3个候选人的基本信息：姓名，票数\n");
    for(i=0; str2[i]!='\0'; i++)  //1
    {
        if((str2[i]>='a') && (str2[i]<='z')) //2
            count[str2[i]-'a']++;  //4
    }
    for(i=0; i<COUNT_SIZE; i++) //1
    {
        if(count[i]>0) //1
        {
             printf("%c %d\n", i+'a', count[i]); //2
        }
    }
    return 0;
}
