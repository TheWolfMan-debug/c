/*ĳ�����տ��Կ�ĿΪ�ߵ���ѧMT��Ӣ��EN������PH����5�˲μӿ��ԡ�
Ϊ������ѧ��Ҫ��ͳ�Ʋ����һ����񣬱�����ݰ���ѧ�š����Ʒ������ֺܷ�ƽ����
����������ſξ���90�������ߣ�������־�����Y�������������N�����������ʽ���£�
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter No. and score as: MT EN PH\n"
**�����ʽҪ��
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

    //ѧ��������
    for(i=0;i<stuN;i++)
    {
        st[i]=i+1;
    }

    //����ɼ�
    for(i=0;i<stuN;i++)
    {
        printf("Enter No. and score as: MT EN PH\n");
        for(j=0;j<courseN;j++)
        {
            scanf("%d",&score[i][j]);
        }

    }

    //�����ܳɼ���ƽ���ɼ�
    for(i=0;i<stuN;i++)
    {
        sum[i]=0;
        for(j=0;j<courseN;j++)
        {
            sum[i]+=score[i][j];
        }
        v[i]=sum[i]/courseN;
    }

    //�ж��Ƿ�ȫ�������ʮ��
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


    //����ɼ���
    printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
    printf("------------------------------------------------------\n");
    //printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",);
    for(i=0;i<stuN;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%c\n",st[i],score[i][0],score[i][1],score[i][2],sum[i],v[i],str[i]);
    }
    return 0;
}
