#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#define DIS 22
#define BLAN 9

typedef struct bird
{
    COORD pos;
    int score;
}BIRD;

void CheckWall(COORD wall[]);
void PrtBird(BIRD *bird);
int CheckWin(COORD *wall,BIRD *bird);
void Begin(BIRD *bird);
BOOL SetConsoleColor(unsigned int wAttributes);
void Gotoxy(int x,int y);
BOOL SetConsoleColor(unsigned int wAttributes);
void HideCursor();

//������
int main(void)
{
    BIRD bird={{22,10},0};
    COORD wall[3]={{40,10},{60,6},{80,8}};
    int i;
    char ch;
    while(CheckWin(wall,&bird))
    {
        Begin(&bird);
        CheckWall(wall);
        PrtBird(&bird);
        Sleep(200);
        if(kbhit())
        {
            ch=getch();
            if(ch==' ')
            {
                bird.pos.Y-=1;
            }
        }
        else
        {
            bird.pos.Y+=1;
        }
        for(i=0;i<3;++i)
        {
            wall[i].X--;

        }
    }
    return 0;
}

//�������ܣ���ʾ����ǽ��
void CheckWall(COORD wall[])
{
    int i;
    HideCursor();
    srand(time(NULL));
    COORD temp={wall[2].X+DIS,rand()%13+5};
    if(wall[0].X<10)
    {
        wall[0]=wall[1];
        wall[1]=wall[2];
        wall[2]=temp;
    }
    for(i=0;i<3;++i)
    {
        //��ʾ�ϰ벿������ǽ
        temp.X=wall[i].X+1;
        SetConsoleColor(0x0c);
        for(temp.Y=2;temp.Y<wall[i].Y;temp.Y++)
        {
            Gotoxy(temp.X,temp.Y);
            printf("000000");
        }
        temp.X--;
        Gotoxy(temp.X,temp.Y);
        printf("000000");
        //��ʾ�°벿������ǽ
        temp.Y+=BLAN;
        Gotoxy(temp.X,temp.Y);
        printf("000000");
        temp.X++;
        temp.Y++;
        for( ;(temp.Y)<26;temp.Y++)
        {
            Gotoxy(temp.X,temp.Y);
            printf("000000");
        }
    }
}

//�������ܣ���ʾС��
void PrtBird(BIRD *bird)
{
    SetConsoleColor(0x0E);
    Gotoxy(bird->pos.X,bird->pos.Y);
    printf("0->");
}

//�������ܣ����С���Ƿ�����ǽ����߳������±߽磬���򷵻�0�����������1������1
int CheckWin(COORD *wall,BIRD *bird)
{
    if(bird->pos.X>=wall->X)
    {
        if(bird->pos.Y<=wall->Y||bird->pos.Y>wall->Y+BLAN)
        {
            return 0;
        }
    }
    if(bird->pos.Y<1||bird->pos.Y>26)
    {
        return 0;
    }
    (bird->score)++;
    return 1;
}

//�������ܣ���ʾ���±߽�ͷ���
void Begin(BIRD *bird)
{
    system("cls");
    Gotoxy(0,26);
    printf("============================="
           "==========================="
           "===============================");
    Gotoxy(0,1);
    printf("==============================="
           "============================="
           "=================================");
    SetConsoleColor(0x0E);
    printf("\n% 4d",bird->score);
}

//�������ܣ���λ���
void Gotoxy(int x,int y)
{
    COORD pos={x,y};
    HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOutput,pos);
}
//�������ܣ�������ɫ
//һ����16��������ɫ��16�ֱ�����ɫ�������256�֡�����Ĳ���ֵӦ��С��256
//�ֽڵĵ�4λ����ǰ��ɫ����4λ���Ʊ���ɫ������+��+��+��
BOOL SetConsoleColor(unsigned int wAttributes)
{
    HANDLE hOutput=GetStdHandle(STD_OUTPUT_HANDLE);
    if(hOutput==INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }
    return SetConsoleTextAttribute(hOutput,wAttributes);
}

//�������ܣ����ع�꣬�����������������Ϸ����
void HideCursor()
{
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle,&CursorInfo);
}//BOOL WINAPI GetConsoleCursorInfo(HANDLE,PCONSOLE_CURSOR_INFO);
