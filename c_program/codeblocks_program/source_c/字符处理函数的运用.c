/*#include <stdio.h>
#define N 80

int main(void)
{
    char str[N];
    int i,letter=0,digit=0,space=0,others=0;
    printf("Input a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            letter++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else if(str[i]==' ')
            space++;
        else
            others++;
    }
    printf("English character:%d\n",letter);
    printf("digit character:%d\n",digit);
    printf("space:%d\n",space);
    printf("other character:%d\n",others);
    return 0;
}*/
#include <stdio.h>
#include <ctype.h>
#define N 80

int main(void)
{
    char str[N];
    int i,letter=0,digit=0,space=0,others=0;
    printf("Input a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
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
    printf("English character:%d\n",letter);
    printf("digit character:%d\n",digit);
    printf("space:%d\n",space);
    printf("other character:%d\n",others);
    return 0;
}
