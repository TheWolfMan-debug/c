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
    printf("请输入当前时间（时 分 秒）：");
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
    printf("当前时间：%d时%d分%d秒！",current_time->hours,current_time->mins,current_time->secs);
}

int main()
{
    input_time(&current_time);
    increment_time(&current_time);
    output_time(&current_time);
    return 0;
}

/*给定如下定义：
 struct time_rec
  {
    int hours ;
    int mins  ;
    int secs  ;
  } ;
  struct time_rec current_time ;
写一个程序包含如下的函数，完成：
(a) 输入current_time的值：
void input_time(struct time_rec *current_time)
(b) 将current_time增加1秒：
void increment_time(struct time_rec *current_time)
(c) 显示current_time的新值。
void output_time(struct time_rec *current_time)

**输入格式要求："%d%d%d" 提示信息："请输入当前时间（时 分 秒）："
**输出格式要求："当前时间：%d时%d分%d秒！"*/
