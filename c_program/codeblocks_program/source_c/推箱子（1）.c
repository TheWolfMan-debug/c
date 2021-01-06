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

//�������ܣ���ʾ�Թ���ͼ
void Show(char str[][M],int n)
{
    int i;
    printf("��Ϸ����\n���ƣ�w\n����:s\n����:a\n���ƣ�d\n");
    for(i=0;i<n;i++)
    {
        puts(str[i]);
    }
}

//�������ܣ�������û������йص��Թ���ͼ����
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
            if(input=='a'&&str[x][y-1]!='*')//����
            {
                str[x][y]=' ';
                y--;
                str[x][y]='o';
            }
            if(input=='d'&&str[x][y+1]!='*')//����
            {
                str[x][y]=' ';
                y++;
                str[x][y]='o';
            }
            if(input=='w'&&str[x-1][y]!='*')//����
            {
                str[x][y]=' ';
                x--;
                str[x][y]='o';
            }
            if(input=='s'&&str[x+1][y]!='*')//����
            {
                str[x][y]=' ';
                x++;
                str[x][y]='o';
            }
        }
        system("cls");//����
        Show(str,n);//��ʾ���º���Թ���ͼ
        Sleep(200);//��ʱ200ms
    }
    printf("You win!!!\n");
    system("PAUSE");
}

























