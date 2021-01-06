/*����ʵ�ְ����˻�������������ֵ��е�˳������볡����������򡣼��������������150����
**�����ʽҪ��"%d" ��ʾ��Ϣ��"How many countries?" "Input their names:\n"
**�����ʽҪ��"Sorted results:\n"
���������ʾ�����£�
How many countries? 5
Input their names:
America
England
Australia
Sweden
Finland
Sorted results:
America
Australia
England
Finland
Sweden*/

#include <stdio.h>
#include <string.h>
#define N 150
#define M 20

void sort(char *ex[],int n);

int main()
{
    char country[N][M];
    char *ex[N];
    int count,i;
    printf("How many countries?");
    scanf("%d",&count);
    getchar();
    printf("Input their names:\n");
    for(i=0;i<count;i++)
    {
        gets(country[i]);
        ex[i]=country[i];
    }
    sort(ex,count);
    printf("Sorted results:\n");
    for(i=0;i<count;i++)
    {
        puts(ex[i]);
    }
    return 0;
}

void sort(char *ex[],int n)
{
    int i,j;
    char *temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(ex[i],ex[j])>0)
            {
                temp=ex[i];
                ex[i]=ex[j];
                ex[j]=temp;
            }
        }
    }
}
