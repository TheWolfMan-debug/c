#include <stdio.h>
#include <stdlib.h>
 struct time_rec
  {
    int hours ;
    int mins  ;
    int secs  ;
  } ;
struct time_rec current_time ;
void input_time(struct time_rec *current_time)
{
    printf("�����뵱ǰʱ�䣨ʱ �� �룩��");
    scanf("%d%d%d",&current_time->hours,&current_time->mins,&current_time->secs);
}
void increment_time(struct time_rec *current_time)
{
    int a;
    a=current_time->hours*3600+current_time->mins*60+current_time->secs+1;
    current_time->hours=a/3600%24;
    current_time->mins=a%3600/60;
    current_time->secs=a%60;
}
void output_time(struct time_rec *current_time)
{
    printf("��ǰʱ�䣺%dʱ%d��%d�룡",current_time->hours,current_time->mins,current_time->secs);
}

int main()
{
    input_time(&current_time);
    increment_time(&current_time);
    output_time(&current_time);
    return 0;
}

/*�������¶��壺
 struct time_rec
  {
    int hours ;
    int mins  ;
    int secs  ;
  } ;
  struct time_rec current_time ;
дһ������������µĺ�������ɣ�
(a) ����current_time��ֵ��
void input_time(struct time_rec *current_time)
(b) ��current_time����1�룺
void increment_time(struct time_rec *current_time)
(c) ��ʾcurrent_time����ֵ��
void output_time(struct time_rec *current_time)

**�����ʽҪ��"%d%d%d" ��ʾ��Ϣ��"�����뵱ǰʱ�䣨ʱ �� �룩��"
**�����ʽҪ��"��ǰʱ�䣺%dʱ%d��%d�룡"*/
