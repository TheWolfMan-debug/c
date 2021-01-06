#include <stdio.h>
#include <string.h>
#define N 3
typedef struct can
{
    char name[10];
}CA;
int main()
{
    CA a[3]={"zhang","li","wang"};
    int d[3]={0,0,0};
    int i,j;
    char c[10];
    for(i=0;i<N;i++)
    {
        printf("Input vote %d:",i+1);
        gets(c);
        strlwr(c);
        for(j=0;j<3;j++)
        {
            if(strcmp(a[j].name,c)==0)
            {
                d[j]++;
            }
        }
    }
    printf("Election results:\n");
    for(i=0;i<3;i++)
    {
        printf("%s:",a[i].name);
        printf("%d\n",d[i]);
    }
    printf("Wrong election:%d\n",N-d[1]-d[2]-d[0]);
    return 0;
}
/*#include  <stdio.h>
#include  <string.h>
#define NUM_ELECTORATE 10
#define NUM_CANDIDATE 3
struct candidate
{
    char  name[20];
    int   count;
}  	   	 	 	      candidate[3] = {"li", 0, "zhang", 0, "wang", 0};
int main()
{
    int  i, j, flag = 1, wrong = 0;
    char  name[20];
    for (i = 1; i <= NUM_ELECTORATE; i++)
    {
        printf("Input vote %d:", i);
        scanf("%s", name);
        strlwr(name);	//将大写字母全部转化为小写字母。
        flag = 1;
        for (j = 0; j < NUM_CANDIDATE; j++)
        {
            if (strcmp(name, candidate[j].name) == 0)
            {
                candidate[j].count++;
                flag = 0;
            }
        }
        if (flag)
        {
            wrong++;
            flag = 0;
        }
    }
    printf("Election results:\n");
    for (i = 0; i < NUM_CANDIDATE; i++)
    {
        printf("%8s:%d\n", candidate[i].name, candidate[i].count);
    }
    printf("Wrong election:%d\n", wrong);
    return 0;*/

/*编程统计候选人的得票数。设有3个候选人zhang、li、wang（注意：候选人姓名不区分大小写，输入大写小写都对），10个选民，选民每次输入一个得票的候选人的名字，若选民输错候选人姓名，则按废票处理。选民投票结束后程序自动显示各候选人的得票结果和废票信息。要求用结构体数组candidate表示3个候选人的姓名和得票结果。
输入提示信息："Input vote %d:"
输入格式："%s"
输出提示信息：
"Election results:\n"
"Wrong election:%d\n"*/
