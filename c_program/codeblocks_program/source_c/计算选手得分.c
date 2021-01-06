/*在歌星大奖赛中，有10个评委为参赛的选手打分，分数为1到100分的整数。
选手最后得分为：去掉一个最高分和一个最低分后其余8个分数的平均值。
请编写代码实现该计分程序。
**输入格式要求："%d" 提示信息："Input score %d\n"
**输出格式要求："Canceled max score: %d\nCanceled min score: %d\n"  "Average score: %d\n"
程序运行示例如下：
Input score 1
98
Input score 2
87
Input score 3
89
Input score 4
84
Input score 5
83
Input score 6
87
Input score 7
89
Input score 8
92
Input score 9
93
Input score 10
95
Canceled max score: 98
Canceled min score: 83
Average score: 89*/

#include <stdio.h>
#define N 10
int main()
{
    int score[N];
    int i,max,min;
    int maxf=0,minf=0;
    int sum=0;
    for(i=0;i<N;i++)
    {
        printf("Input score %d\n",i+1);
        scanf("%d",&score[i]);
    }
    max=score[0],min=score[0];
    for(i=0;i<N;i++)
    {
        if(max<score[i])
        {
            max=score[i];
            maxf=i;
        }
        if(min>score[i])
        {
            min=score[i];
            minf=i;
        }
    }

    score[maxf]=0;
    score[minf]=0;
    for(i=0;i<N;i++)
    {
        sum+=score[i];
    }
    printf("Canceled max score: %d\nCanceled min score: %d\n",max,min);
    printf("Average score: %d\n",sum/(N-2));
    return 0;
}
