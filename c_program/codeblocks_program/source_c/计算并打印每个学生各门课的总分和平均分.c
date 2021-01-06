#include  <stdio.h>
#define STUD   30           /* �����ܵ�ѧ������ */
#define COURSE 5            /* �����ܵĿ��Կ�Ŀ�� */
int inputscore(int *pScore,int m,int n);
void  Total(int *pScore, int sum[], float aver[], int m, int n);
void  Print(int *pScore, int sum[], float aver[], int m, int n);
int main()
{
    int     i, j, m, n, score[STUD][COURSE], sum[STUD];
    float   aver[STUD];
    printf("How many students?");
    scanf("%d", &m);
    printf("How many courses?");
    scanf("%d", &n);
    inputscore(*score,m,n);
    Total(*score, sum, aver, m, n);
    Print(*score, sum, aver, m, n);
    return 0;
}
void  Total(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    for (i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (j = 0; j < n; j++)
        {
            sum[i] = sum[i] + pScore[i * n + j];
        }
        aver[i] = (float) sum[i] / n;
    }
}
void  Print(int *pScore, int sum[], float aver[], int m, int n)
{
    int  i, j;
    printf("Result:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d\t", pScore[i * n + j]);
        }
        printf("%5d\t%6.1f\n", sum[i], aver[i]);
    }
}
int inputscore(int *pScore,int m,int n)
{
    int i,j;
    printf("Input scores:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &pScore[i*n+j]);
        }
    }
}
/*����m��ѧ�������Ϊ30�ˣ�n�ſγ̣����Ϊ5�ţ��ĳɼ���Ȼ����㲢��ӡÿ��ѧ�����ſε��ֺܷ�ƽ���֡����У�m��n��ֵ���û��Ӽ������롣*/
