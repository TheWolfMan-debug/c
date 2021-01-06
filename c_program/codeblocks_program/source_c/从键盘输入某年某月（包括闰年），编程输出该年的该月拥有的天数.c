#include <stdio.h>
int DayofYear(int year, int month);
int dayTab[2][12] =
{
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
int main()
{
    int year, month=0;
    do
    {
        printf("Input year,month:");
        scanf("%d,%d", &year, &month);
        getchar();
    }while(month<1||month>12);
    printf("The number of days is %d\n",DayofYear(year, month));
    return 0;
}
int DayofYear(int year, int month)
{
    int i, leap,day;
    leap = !((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    for (i = 0; i < month; i++)
    {
        day = dayTab[leap][i];
    }
    return day;
}
/*从键盘输入某年某月（包括闰年），编程输出该年的该月拥有的天数。
**输入格式要求："%d,%d" 提示信息："Input year,month:" "The number of days is %d\n"
**输出格式要求："%d"
程序运行示例1如下：
Input year,month:1984,2
The number of days is 29
程序运行示例2如下：
Input year,month:2000,2
The number of days is 29
程序运行示例3如下：
Input year,month:1985,2
The number of days is 28
程序运行示例4如下：
Input year,month:1983,13
Input year,month:1983,-1
Input year,month:1983,1
The number of days is 31*/
