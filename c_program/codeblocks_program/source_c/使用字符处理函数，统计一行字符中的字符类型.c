#include <stdio.h>
#include <ctype.h>
#define n 80
int main()
{
    char str[n];
    int i,letter=0,digit=0,space=0,others=0;
    printf("input a string:");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(isalpha(str[i]))
            letter++;
        else if(isdigit(str[i]))
            digit++;
        else if(isspace(str[i]))
            space++;
        else
            others++;
    }
    printf("English character :%d\n",letter);
    printf("digit character : %d\n",digit);
    printf("space:%d\n",space);
    printf("others character: %d\n",others);
    return 0;
}
