#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define N 50
#define M 50

void Show(char str[][M],int n);
void UpdateWithInput(char str[][M],int n);

int main(void)
{
    char str[N][M]=
    {
        "************",
        "*o        * ",
        "* **********",
        "* *  *   ** ",
        "*   * * *  *",
        "* *  **  * *",
        "**** * ** *",
        "*  *   *   *",
        "** ***   *  ",
        "***    *   *",
        "*   *   *  *",
        "* *** **** *",
    };
    int n=12;
    Show(str,n);
    UpdateWithInput(str,n);
    return 0;
}

//函数功能：显示迷宫地图
void Show(char str[][M],int n)
{
    int i;
    printf("游戏规则：\n上移：w\n下移:s\n左移:a\n右移：d\n");
    for(i=0;i<n;i++)
    {
        puts(str[i]);
    }
}

//函数功能：完成与用户输入有关的迷宫地图更新
void UpdateWithInput(char str[][M],int n)
{
    int x=1,y=1;
    int exitX=10,exitY=10;
    char input;
    while(x!=exitX||y!=exitY)
    {
        if(kbhit())
        {
            input=getch();
            if(input=='a'&&str[x][y-1]!='*')//左移
            {
                str[x][y]=' ';
                y--;
                str[x][y]='o';
            }
            if(input=='d'&&str[x][y+1]!='*')//右移
            {
                str[x][y]=' ';
                y++;
                str[x][y]='o';
            }
            if(input=='w'&&str[x-1][y]!='*')//上移
            {
                str[x][y]=' ';
                x--;
                str[x][y]='o';
            }
            if(input=='s'&&str[x+1][y]!='*')//下移
            {
                str[x][y]=' ';
                x++;
                str[x][y]='o';
            }
        }
        system("cls");//清屏
        Show(str,n);//显示更新后的迷宫地图
        Sleep(200);//延时200ms
    }
    printf("You win!!!\n");
    system("PAUSE");
}

























