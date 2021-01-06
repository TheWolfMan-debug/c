#include <stdio.h>

struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
typedef struct date_rec date;

void input_date(struct date_rec *current_date);
void increment_date(struct date_rec *current_date);
void output_date(struct date_rec *current_date);

void main()
{
    date a;
    input_date(&a);
    increment_date(&a);
    output_date(&a);
}

void input_date(struct date_rec *current_date)
{
    printf("�����뵱ǰ���ڣ��� �� �գ���");
    scanf("%d%d%d",&current_date->year,&current_date->month,&current_date->day);
}

void increment_date(struct date_rec *current_date)
{
    int flag=1;
    if(current_date->year%4==0&&current_date->year%100!=0||current_date->year%400==0)
    {
        if(current_date->day==29&&current_date->month==2)
        {
            flag=0;
            current_date->day=1;
            current_date->month++;
        }
        if(current_date->day==30&&(current_date->month==4||current_date->month==6||current_date->month==9||current_date->month==11))
        {
            flag=0;
            current_date->month++;
            current_date->day=1;
        }
        if(current_date->day==31)
            {
                if(current_date->month!=12)
                {
                    flag=0;
                    current_date->month++;
                    current_date->day=1;
                }
                else
                {
                    flag=0;
                    current_date->year++;
                    current_date->month=1;
                    current_date->day=1;
                }
            }
        else if(flag)
        {
            current_date->day++;
        }
    }
    else
    {
        if(current_date->day==28&&current_date->month==2)
        {
            flag=0;
            current_date->day=1;
            current_date->month++;
        }
        if(current_date->day==30&&(current_date->month==4||current_date->month==6||current_date->month==9||current_date->month==11))
        {
            flag=0;
            current_date->month++;
            current_date->day=1;
        }
        if(current_date->day==31)
            {
                flag=0;
                if(current_date->month!=12)
                {
                    current_date->month++;
                    current_date->day=1;
                }
                else
                {
                    current_date->year++;
                    current_date->month=1;
                    current_date->day=1;
                }
            }
        else if(flag)
        {
            current_date->day++;
        }
    }
}

void output_date(struct date_rec *current_date)
{
    printf("��ǰ���ڣ�%d��%d��%d�գ�",current_date->year,current_date->month,current_date->day);
}
/*if(current_date->day==29||current_date->day==30||current_date->day==31)
        {
            if(current_date->day==31)
            {
                if(current_date->month!=12)
                {
                    current_date->month++;
                    current_date->day=1;
                }
                else
                {
                    current_date->year++;
                    current_date->month=1;
                    current_date->day=1;
                }
            }
            else
            {
                current_date->day=1;
                current_date->month++;
            }
        }
        else
        {
            current_date->day++;
        }*/
/*�������¶��壺
struct date_rec
  {
    int day ;
    int month ;
    int year ;
  } ;
  struct date_rec current_date ;
дһ������������µĺ�������ɣ�
(a) ����current_date��ֵ��
void input_date(struct date_rec *current_date)
(b) ��current_date����1�죺
void increment_date(struct date_rec *current_date)
(c) ��ʾcurrent_date��ֵ��
void output_date(struct date_rec *current_date)
����ÿ���µ�ʵ��������ͬʱҲ��������������

**�����ʽҪ��"%d%d%d" ��ʾ��Ϣ��"�����뵱ǰ���ڣ��� �� �գ���"
**�����ʽҪ��"��ǰ���ڣ�%d��%d��%d�գ�" ����1���������ڣ�*/
