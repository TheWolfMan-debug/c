#include <stdio.h>

int mystrcmp(char *p1,char *p2);

int main()
{
    int flag;
    char p1[100];
    char p2[100];
    printf("Input string p1:\n");
    gets(p1);
    printf("Input string p2:\n");
    gets(p2);
    flag=mystrcmp(p1,p2);
    if(flag==0)
    {
        printf("The two strings are equal!");
    }
    else if(flag==-1)
    {
        printf("The first one is larger!");
    }
    else if(flag==1)
    {
        printf("The second one is larger!");
    }
    return 0;
}

int mystrcmp(char *p1,char *p2)
{
        while(*p1==*p2&&(p1!='\0'||p2!='\0'))
        {
            p1++;
            p2++;
        }
        if(*p1>*p2)
        {
            return -1;
        }
        else if(*p1<*p2)
        {
            return 1;
        }
        else if(*p1==*p2)
        {
            return 0;
        }
}
