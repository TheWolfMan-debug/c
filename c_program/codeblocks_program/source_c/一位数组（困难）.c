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
/*在主函数中从键盘输入某班学生某门课程的成绩(已知班级人数最多不超过40人，具体人数由键盘输入),试编程计算其平均分，并计算出成绩高于平均分的学生的人数。
要求：调用函数aver()，计算n名学生的平均成绩返回给主函数，然后在主函数中输出学生的平均成绩。
函数原型：float aver(int score[],int n);
***输入提示信息：无
***输入格式：输入学生人数用"%d"，输入学生成绩用"%d"
***输出平均成绩提示信息和格式："Average score is %10.2f\n"
***输出平均分以上的学生人数提示信息和格式:"The number of students in more than average %d\n"
注：（1）不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程。
       （2）用纯C语言编程，所有变量必须在第一条可执行语句前定义。*/
