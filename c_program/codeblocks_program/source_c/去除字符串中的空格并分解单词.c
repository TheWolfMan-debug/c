/*��Ŀ��ȥ���ַ����еĿո񲢷ֽⵥ�ʡ�
Ҫ����main()�е�������������������ַ�����ȥ���ո񲢷ֽⵥ�ʵĹ��ܡ�
����ԭ�����£�
����һ���������Ƿ�������� int IsNumIn(char word[])
���������������Ƿ�����ո� int IsSpcIn(char word[])
��������ȥ�����ʵ�ǰ��ո�tab���ͻ��з� Trim(char oldWord[], char newWord[])
�����ģ������ڲ��пո񣬷ֽ�ɶ������ Seg(char words[], char wArray[][100] )
���赥���ڲ�ֻ��һ���ո�û�����������ո�����������
Ҫ������gets����������û�������ַ�����������scanf������û�������ַ���
�ο����룬���
�ο�����
ros2e
�ο����
error
�ο�����
���hello�㣨 �����һ���ո�
�ο����
hello
�ο�����
���hello world��
�ο����
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
