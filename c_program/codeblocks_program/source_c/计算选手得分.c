/*�ڸ��Ǵ����У���10����ίΪ������ѡ�ִ�֣�����Ϊ1��100�ֵ�������
ѡ�����÷�Ϊ��ȥ��һ����߷ֺ�һ����ͷֺ�����8��������ƽ��ֵ��
���д����ʵ�ָüƷֳ���
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Input score %d\n"
**�����ʽҪ��"Canceled max score: %d\nCanceled min score: %d\n"  "Average score: %d\n"
��������ʾ�����£�
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
