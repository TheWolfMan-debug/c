#include <stdio.h>
#include <string.h>
#define N 4
typedef struct student
{
    unsigned int num;
    char name[10];
    int score;

}STU;

void sort(STU *a);

int main()
{
    STU a[4];
    int i;
    for(i=0;i<N;i++)
    {
        printf("�����%d��ѧ������Ϣ��ѧ�š��������ɼ�\n",i+1);
        scanf("%d %s %d",&a[i].num,a[i].name,&a[i].score);
    }
    sort(a);
    return 0;
}

void sort(STU *a)
{
    int i,j;
    STU temp;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if((a+i)->score<(a+j)->score)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("�����ѧ������ϢΪ:\n");
    for(i=0;i<N;i++)
    {
        printf("%d %s %d\n",a[i].num,a[i].name,a[i].score);
    }
}
/*�ýṹ��ʵ������4��ѧ����ѧ�ţ��޷������������������ַ������Ϳ��Գɼ�����������Ȼ�󰴴Ӹ߷ֵ��ͷֵ�˳�����к������

���������ʾ�����£�
�����1��ѧ������Ϣ��ѧ�š��������ɼ�
2011 zhangsan 89
�����2��ѧ������Ϣ��ѧ�š��������ɼ�
2012 lisi 96
�����3��ѧ������Ϣ��ѧ�š��������ɼ�
2013 wangwu 67
�����4��ѧ������Ϣ��ѧ�š��������ɼ�
2014 liuliu 59
�����ѧ������ϢΪ:
2012 lisi 96
2011 zhangsan 89
2013 wangwu 67
2014 liuliu 59


������ʾ��"�����%d��ѧ������Ϣ��ѧ�š��������ɼ�\n"
�����ʽ��"%d %s %d"
�����ʽ��"�����ѧ������ϢΪ:\n"
�����ʽ��"%d %s %d\n"*/
