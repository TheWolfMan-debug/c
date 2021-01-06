/*某班期终考试科目为高等数学MT，英语EN和物理PH，有5人参加考试。
为评定奖学金，要求统计并输出一个表格，表格内容包括学号、各科分数、总分和平均分
，并标出三门课均在90分以上者（该栏标志输出“Y”，否则输出“N”），表格形式如下：
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**输入格式要求："%d" 提示信息："Enter No. and score as: MT EN PH\n"
**输出格式要求：
"NO\tMT\tEN\tPH\tSUM\tV\t>90\n"
"------------------------------------------------------\n"
"%d\t%d\t%d\t%d\t%d\t%d\t%c\n"*/

#include <stdio.h>
#define stuN 5
#define courseN 3



int main()
{
    int st[stuN],score[stuN][courseN],sum[stuN],v[stuN];
    char str[stuN];
    int i,j,flag;

    //学生的人数
    for(i=0;i<stuN;i++)
    {
        st[i]=i+1;
    }

    //输入成绩
    for(i=0;i<stuN;i++)
    {
        printf("Enter No. and score as: MT EN PH\n");
        for(j=0;j<courseN;j++)
        {
            scanf("%d",&score[i][j]);
        }

    }

    //计算总成绩和平均成绩
    for(i=0;i<stuN;i++)
    {
        sum[i]=0;
        for(j=0;j<courseN;j++)
        {
            sum[i]+=score[i][j];
        }
        v[i]=sum[i]/courseN;
    }

    //判断是否全部到达九十分
    for(i=0;i<stuN;i++)
    {
        flag=0;
        for(j=0;j<courseN;j++)
        {
            if(score[i][j]<90)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            str[i]='N';
        }
        else
        {
            str[i]='Y';
        }
    }


    //输出成绩表
    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
    printf("------------------------------------------------------\n");
    //printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",);
    for(i=0;i<stuN;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",st[i],score[i][0],score[i][1],score[i][2],sum[i],v[i],str[i]);
    }
    return 0;
}
