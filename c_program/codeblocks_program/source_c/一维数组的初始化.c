#include <stdio.h>
int main()
{
    int score[5];
    int totalscore=0;
    int i;
    printf("input the scores of five students:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&score[i]);
        totalscore=totalscore+score[i];
    }
    printf("the average score is %f\n",totalscore/5.0);
    return 0;
}
