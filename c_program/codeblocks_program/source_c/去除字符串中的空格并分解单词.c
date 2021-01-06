/*题目：去除字符串中的空格并分解单词。
要求：在main()中调用下述各函数，完成字符串中去除空格并分解单词的功能。
函数原型如下：
函数一：单词内是否包含数字 int IsNumIn(char word[])
函数二：单词内是否包含空格 int IsSpcIn(char word[])
函数三：去掉单词的前后空格，tab键和换行符 Trim(char oldWord[], char newWord[])
函数四：单词内部有空格，分解成多个单词 Seg(char words[], char wArray[][100] )
假设单词内部只有一个空格，没有两个连续空格的情况发生。
要求利用gets函数来获得用户输入的字符串，不能用scanf来获得用户输入的字符串
参考输入，输出
参考输入
ros2e
参考输出
error
参考输入
︺︺hello︺（ ︺代表一个空格）
参考输出
hello
参考输入
︺︺hello world︺
参考输出
hello
world*/

#include <stdio.h>
#include <stdlib.h>
#define N 100

int IsNumIn(char word[]);
int IsSpcIn(char word[]);
void Trim(char oldWord[], char newWord[]);
void Seg(char words[], char wArray[][100]);

int main()
{
    char oldword[N],neword[N],wArray[N][100];
    gets(oldword);
    IsNumIn(oldword);
    IsSpcIn(oldword);
    Trim(oldword,neword);
    Seg(oldword,wArray);
    return 0;
}

int IsNumIn(char word[])
{
    char *p=word;
    while(*p)
    {
        if(*p>='0'&&*p<='9')
        {
            printf("error!!!");
            exit(1);
        }
        p++;
    }
    return 0;
}

int IsSpcIn(char word[])
{
    char *p=word;
    while(*p)
    {
        if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
        {
            while(*p)
            {
                p++;
                if(*p==' ')
                {
                    printf("The words have space!!!\n");
                    return 0;
                }
            }
        }
        p++;
    }
    return 0;
}

void Trim(char oldWord[], char newWord[])
{
    char *p1=oldWord,*p2=oldWord;
    while((*p1<'a'&&*p1>'Z')||*p1<'A'||*p1>'z')
    {
        *p1='1';
        p1++;
    }
    while(*p2)
    {
        p2++;
    }
    p2--;
    while((*p2<'a'&&*p2>'Z')||*p2<'A'||*p2>'z')
    {
        *p2='1';
        p2--;
    }
    p2++;
    //puts(oldWord);
}

void Seg(char words[], char wArray[][100])
{
    char *p1=words,*p2=words;
    int i=0,flag;
    while(*p1=='1')
    {
        p1++;
        i++;
    }
    while(words[i]!='1'&&words[i]!='\0')
    {
        if(words[i]==' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",words[i]);
        }
        flag=1;
        while(words[i]==' ')
        {
            i++;
            flag=0;
        }
        if(flag)
        {
            i++;
        }
    }
}
