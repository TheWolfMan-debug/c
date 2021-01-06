#include <stdio.h>
#include <stdlib.h>
#define N 30

typedef struct date
{
    int year;
    int month;
    int day;
}DATE;
typedef struct student
{
    long studentID;
    char studentName;
    char studentSex;
    DATE birthday;
    int score[4];
    float aver;
}STUDENT;

void InputScore(STUDENT stu[],int n,int m);
void AverScore(STUDENT stu[],int n,int m);
void WritetoFile(STUDENT stu[],int n,int m);

int main(void)
{
    STUDENT stu[N];
    int n;
    printf("How many student?");
    scanf("%d",&n);
    InputScore(stu,n,4);
    AverScore(stu,n,4);
    WritetoFile(stu,n,4);
    return 0;
}

void InputScore(STUDENT stu[],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Input record %d:\n",i+1);
        scanf("%ld",&stu[i].studentID);
        scanf("%s",stu[i].studentName);
        scanf(" %c",&stu[i].studentSex);
        scanf("%d",&stu[i].birthday.year);
        scanf("%d",&stu[i].birthday.month);
        scanf("%d",&stu[i].birthday.day);
        for(j=0;j<m;j++)
        {
            scanf("%d",&stu[i].score[j]);
        }
    }
}

void AverScore(STUDENT stu[],int n,int m)
{
    int i,j,sum;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+stu[i].score[j];
        }
        stu[i].aver=(float)sum/m;
    }
}

void WritetoFile(STUDENT stu[],int n,int m)
{
    FILE *fp;
    int i,j;
    if((fp=fopen("score.txt","w"))==NULL)
    {
        printf("Failure to open score score.txt!\n");
        exit(0);
    }
    fprintf(fp,"%d\t%d\n",n,m);
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%10ld%8s%3c%6d/%02d/%02d",stu[i].studentID,stu[i].studentName,stu[i].studentSex,stu[i].birthday.year,stu[i].birthday.month,stu[i].birthday.day);
        for(j=0;j<m;j++)
        {
            fprintf(fp,"%4d",stu[i].score[j]);
        }
        fprintf(fp,"%6.1f\n",stu[i].aver);
    }
    fclose(fp);
}
