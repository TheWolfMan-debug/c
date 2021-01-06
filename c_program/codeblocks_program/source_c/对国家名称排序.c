/*请编程实现按奥运会参赛国国名在字典中的顺序对其入场次序进行排序。假设参赛国不超过150个。
**输入格式要求："%d" 提示信息："How many countries?" "Input their names:\n"
**输出格式要求："Sorted results:\n"
程序的运行示例如下：
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
