#include <stdio.h>
#include <string.h>
#define N 3
typedef struct can
{
    char name[10];
}CA;
int main()
{
    CA a[3]={"zhang","li","wang"};
    int d[3]={0,0,0};
    int i,j;
    char c[10];
    for(i=0;i<N;i++)
    {
        printf("Input vote %d:",i+1);
        gets(c);
        strlwr(c);
        for(j=0;j<3;j++)
        {
            if(strcmp(a[j].name,c)==0)
            {
                d[j]++;
            }
        }
    }
    printf("Election results:\n");
    for(i=0;i<3;i++)
    {
        printf("%s:",a[i].name);
        printf("%d\n",d[i]);
    }
    printf("Wrong election:%d\n",N-d[1]-d[2]-d[0]);
    return 0;
}
/*#include  <stdio.h>
#include  <string.h>
#define NUM_ELECTORATE 10
#define NUM_CANDIDATE 3
struct candidate
{
    char  name[20];
    int   count;
}  	   	 	 	      candidate[3] = {"li", 0, "zhang", 0, "wang", 0};
int main()
{
    int  i, j, flag = 1, wrong = 0;
    char  name[20];
    for (i = 1; i <= NUM_ELECTORATE; i++)
    {
        printf("Input vote %d:", i);
        scanf("%s", name);
        strlwr(name);	//����д��ĸȫ��ת��ΪСд��ĸ��
        flag = 1;
        for (j = 0; j < NUM_CANDIDATE; j++)
        {
            if (strcmp(name, candidate[j].name) == 0)
            {
                candidate[j].count++;
                flag = 0;
            }
        }
        if (flag)
        {
            wrong++;
            flag = 0;
        }
    }
    printf("Election results:\n");
    for (i = 0; i < NUM_CANDIDATE; i++)
    {
        printf("%8s:%d\n", candidate[i].name, candidate[i].count);
    }
    printf("Wrong election:%d\n", wrong);
    return 0;*/

/*���ͳ�ƺ�ѡ�˵ĵ�Ʊ��������3����ѡ��zhang��li��wang��ע�⣺��ѡ�����������ִ�Сд�������дСд���ԣ���10��ѡ��ѡ��ÿ������һ����Ʊ�ĺ�ѡ�˵����֣���ѡ������ѡ���������򰴷�Ʊ����ѡ��ͶƱ����������Զ���ʾ����ѡ�˵ĵ�Ʊ����ͷ�Ʊ��Ϣ��Ҫ���ýṹ������candidate��ʾ3����ѡ�˵������͵�Ʊ�����
������ʾ��Ϣ��"Input vote %d:"
�����ʽ��"%s"
�����ʾ��Ϣ��
"Election results:\n"
"Wrong election:%d\n"*/
