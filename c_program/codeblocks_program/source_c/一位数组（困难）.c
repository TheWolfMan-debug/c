#include <stdio.h>
#define N 40

float aver(int score[],int n);

void main()
{
    int stu[N];
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&stu[i]);
    }
    printf("Average score is %10.2f\n",aver(stu,n));
    for(i=0;i<n;i++)
    {
        if(stu[i]>aver(stu,n))
        {
            sum++;
        }
    }
    printf("The number of students in more than average %d\n",sum);
}

float aver(int score[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    return (float)sum/n;
}
/*���������дӼ�������ĳ��ѧ��ĳ�ſγ̵ĳɼ�(��֪�༶������಻����40�ˣ����������ɼ�������),�Ա�̼�����ƽ���֣���������ɼ�����ƽ���ֵ�ѧ����������
Ҫ�󣺵��ú���aver()������n��ѧ����ƽ���ɼ����ظ���������Ȼ���������������ѧ����ƽ���ɼ���
����ԭ�ͣ�float aver(int score[],int n);
***������ʾ��Ϣ����
***�����ʽ������ѧ��������"%d"������ѧ���ɼ���"%d"
***���ƽ���ɼ���ʾ��Ϣ�͸�ʽ��"Average score is %10.2f\n"
***���ƽ�������ϵ�ѧ��������ʾ��Ϣ�͸�ʽ:"The number of students in more than average %d\n"
ע����1������ʹ��ָ�롢�ṹ�塢�����塢�ļ���goto��ö�����ͽ��б�̡�
       ��2���ô�C���Ա�̣����б��������ڵ�һ����ִ�����ǰ���塣*/
