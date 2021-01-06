#include <stdio.h>
int main()
{
    int a[40],b[10]={1,2,3,4,5,6,7,8,9,10},c[10]={0};
    int i,j,k;
    printf("Input the feedbacks of 40 students:\n");
    for(i=0;i<40;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<40;i++)
    {

        if(*(a+i)<1||*(a+i)>10)
        {
            printf("input error!\n");
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<40;j++)
        {
            if(b[i]==a[j])
                c[i]++;
        }
    }
    printf("Feedback\tCount\tHistogram\n");
    for(i=0;i<10;i++)
    {
        printf("%8d\t%5d\t",i+1,c[i]);
        for(j=0;j<c[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*������40��ѧ��������������������ʳ�ͷ���������֣���������Ϊ1��10��10���ȼ���1��ʾ��ͷ֣�10��ʾ��߷֣������ͳ�Ʋ������¸�ʽ�����������������������
Grade       Count		Histogram
1	     5		*****
2	    10		**********
3	     7		*******
...
**�����ʽҪ��"%d"  ��ʾ��Ϣ��"Input the feedbacks of 40 students:\n"  "input error!\n"
**�����ʽҪ��"Feedback\tCount\tHistogram\n"  "%8d\t%5d\t"
��������ʾ�����£�
Input the feedbacks of 40 students:
10 9 10 8 7 6 5 10 9 8
8 9 7 6 10 9 8 8 7 7
6 6 8 8 9 9 10 8 7 7
9 8 7 9 7 6 5 9 8 7
Feedback	Count	Histogram
       1	    0
       2	    0
       3	    0
       4	    0
       5	    2	**
       6	    5	*****
       7	    9	*********
       8	   10	**********
       9	    9	*********
      10	    5	*****         */
