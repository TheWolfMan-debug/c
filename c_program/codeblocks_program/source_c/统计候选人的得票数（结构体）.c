#include <stdio.h>
#include <string.h>
#define N 10
typedef struct people
{
    char peopleName[10];
}PEOPLE;
int main()
{
    int sum[4]={0,0,0,0};
    int i,j;
    char name[N][N];
    PEOPLE stu[3]={"zhang","li","wang"};
    for(i=0;i<2;i++)
    {
        printf("Input vote %d:",i+1);
        gets(name[i]);
            for(j=0;j<3;j++)
            {
                if(strcmp(name[i],stu[j].peopleName)==0)
                sum[j]++;
            }
    }
    for(i=0;i<3;i++)
    {
        sum[3]+=sum[i];
    }
    printf("Election results:\n");
    printf("li:%d\n",sum[1]);
    printf("zhang:%d\n",sum[0]);
    printf("wang:%d\n",sum[2]);
    printf("Wrong election:%d\n",10-sum[3]);
    return 0;
}
/*编程统计候选人的得票数。设有3个候选人zhang、li、wang（候选人姓名不区分大小写），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。最后输出格式为："%8s:%d\n"，"Wrong election:%d\n"
例如：
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:wang
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2*/

