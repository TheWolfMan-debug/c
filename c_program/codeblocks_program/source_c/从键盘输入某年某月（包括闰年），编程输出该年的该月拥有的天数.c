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
/*�Ӽ�������ĳ��ĳ�£��������꣩������������ĸ���ӵ�е�������
**�����ʽҪ��"%d,%d" ��ʾ��Ϣ��"Input year,month:" "The number of days is %d\n"
**�����ʽҪ��"%d"
��������ʾ��1���£�
Input year,month:1984,2
The number of days is 29
��������ʾ��2���£�
Input year,month:2000,2
The number of days is 29
��������ʾ��3���£�
Input year,month:1985,2
The number of days is 28
��������ʾ��4���£�
Input year,month:1983,13
Input year,month:1983,-1
Input year,month:1983,1
The number of days is 31*/
