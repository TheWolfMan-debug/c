#include <stdio.h>
#include <string.h>
#define N 10
typedef struct people
{
    char peopleName[10];
}PEOPLE;
int main()
{
    int sum[4]={0,0,0,0};
    int i,j;
    char name[N][N];
    PEOPLE stu[3]={"zhang","li","wang"};
    for(i=0;i<2;i++)
    {
        printf("Input vote %d:",i+1);
        gets(name[i]);
            for(j=0;j<3;j++)
            {
                if(strcmp(name[i],stu[j].peopleName)==0)
                sum[j]++;
            }
    }
    for(i=0;i<3;i++)
    {
        sum[3]+=sum[i];
    }
    printf("Election results:\n");
    printf("li:%d\n",sum[1]);
    printf("zhang:%d\n",sum[0]);
    printf("wang:%d\n",sum[2]);
    printf("Wrong election:%d\n",10-sum[3]);
    return 0;
}
/*���ͳ�ƺ�ѡ�˵ĵ�Ʊ��������3����ѡ��zhang��li��wang����ѡ�����������ִ�Сд����10��ѡ��ѡ��ÿ������һ����Ʊ�ĺ�ѡ�˵����֣���ѡ������ѡ���������򰴷�Ʊ����ѡ��ͶƱ����������Զ���ʾ����ѡ�˵ĵ�Ʊ����ͷ�Ʊ��Ϣ��Ҫ���ýṹ������candidate��ʾ3����ѡ�˵������͵�Ʊ�������������ʽΪ��"%8s:%d\n"��"Wrong election:%d\n"
���磺
Input vote 1:li
Input vote 2:li
Input vote 3:Zhang
Input vote 4:wang
Input vote 5:zhang
Input vote 6:Wang
Input vote 7:Zhang
Input vote 8:wan
Input vote 9:li
Input vote 10:lii
Election results:
      li:3
   zhang:3
    wang:2
Wrong election:2*/

