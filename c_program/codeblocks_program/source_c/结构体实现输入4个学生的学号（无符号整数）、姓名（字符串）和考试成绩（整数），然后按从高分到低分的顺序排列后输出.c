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
        printf("输入第%d个学生的信息：学号、姓名、成绩\n",i+1);
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
    printf("排序后学生的信息为:\n");
    for(i=0;i<N;i++)
    {
        printf("%d %s %d\n",a[i].num,a[i].name,a[i].score);
    }
}
/*用结构体实现输入4个学生的学号（无符号整数）、姓名（字符串）和考试成绩（整数），然后按从高分到低分的顺序排列后输出。

程序的运行示例如下：
输入第1个学生的信息：学号、姓名、成绩
2011 zhangsan 89
输入第2个学生的信息：学号、姓名、成绩
2012 lisi 96
输入第3个学生的信息：学号、姓名、成绩
2013 wangwu 67
输入第4个学生的信息：学号、姓名、成绩
2014 liuliu 59
排序后学生的信息为:
2012 lisi 96
2011 zhangsan 89
2013 wangwu 67
2014 liuliu 59


输入提示："输入第%d个学生的信息：学号、姓名、成绩\n"
输入格式："%d %s %d"
输出提式："排序后学生的信息为:\n"
输出格式："%d %s %d\n"*/
