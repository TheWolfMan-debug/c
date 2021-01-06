#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define N 50
#define M 50

int flag=0;     //全局变量flag用来标记是否路径全部走完
int a[N][N]=
{
    {1,1,1,1,1,1,1,1,1,1,1,1},//初始化迷宫为12行12列
    {1,0,0,0,0,0,0,0,0,0,0,1},
    {1,0,1,1,1,1,1,1,1,1,1,1},
    {1,0,1,0,0,0,1,0,0,0,1,1},
    {1,0,1,0,1,0,1,0,1,0,1,1},
    {1,0,1,0,1,0,1,0,1,0,0,1},
    {1,0,1,0,1,0,1,0,1,0,0,1},
    {1,0,1,0,1,0,1,0,1,1,0,1},
    {1,0,1,0,1,0,1,0,1,1,0,1},
    {1,0,1,0,1,0,1,0,1,1,0,1},
    {1,0,0,0,1,0,0,0,1,1,0,0},
    {1,1,1,1,1,1,1,1,1,1,1,1},
};

void Show(int a[][M],int n,int m);
int Go(int x1,int y1,int x2,int y2);

int main(void)
{
    int x1,y1,x2,y2;
    int n=12,m=12;
    Show(a,n,m);        //显示初始化迷宫
    printf("Input x1,y1,x2,y2:\n");     //显示迷宫的入口和出口
    scanf("%d,%d,%d,%d",&x1,&y1,&x2,&y2);
    if(Go(x1,y1,x2,y2)==0)      //若自动走出迷宫失败
    {
        printf("没有路径！\n");
    }
    else
    {
        printf("You win!!!");
        system("PAUSE");
    }
    return 0;
}

//函数功能：显示迷宫地图
void Show(int a[][M],int n,int m)       //显示n行m列迷宫地图数据
{
    int i,j;
    for(i=0;i<n;++i)
    {
        for(j=0;j<m;++j)
        {
            if(a[i][j]==0)
            {
                printf(" ");        //显示路
            }
            else if(a[i][j]==1)
            {
                printf("*");        //显示障碍物
            }
            else if(a[i][j]==2)
            {
                printf("o");        //显示电子老鼠
            }
        }
        printf("\n");
    }
}

//函数功能：用递归函数实现自动走迷宫，从入口（x1,y1)走到出口（x2,y2)
int Go(int x1,int y1,int x2,int y2)
{
    a[x1][y1]=2;        //将电子老鼠之于迷宫入口
    system("cls");      //清屏
    Show(a,12,12);      //显示更新后的迷宫地图
    Sleep(200);         //延时200ms
    if(x1==x2&&y1==y2)  //若到达迷宫出口（x2,y2），则将flag置为1
    {
        flag=1;
    }
    if(flag!=1&&a[x1-1][y1]==0)     //判断向上是否有路
    {
        Go(x1-1,y1,x2,y2);
    }
    if(flag!=1&&a[x1+1][y1]==0)     //判断向下是否有路
    {
        Go(x1+1,y1,x2,y2);
    }
    if(flag!=1&&a[x1][y1+1]==0)     //判断向右是否有路
    {
        Go(x1,y1+1,x2,y2);
    }
    if(flag!=1&&a[x1][y1-1]==0)    //判断向左是否有路
    {
        Go(x1,y1-1,x2,y2);
    }
    if(flag!=1)
    {
        a[x1][y1]=0;
    }
    return flag;
}
