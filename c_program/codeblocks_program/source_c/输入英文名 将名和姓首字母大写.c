#include <stdio.h>
#include <ctype.h>
#define n 80
int main()
{
    char name[n];
    int i;
    printf("input a name :");
    gets(name);
    i=0;
    while(!isalpha(name[i]))
    {
        i++;
    }
    name[i]=toupper(name[i]);
    while(!isspace(name[i]))
    {
        i++;
    }
    while(!isalpha(name[i]))
    {
        i++;
    }
    name[i]=toupper(name[i]);
    printf("formatted name:%s\n",name);
    return 0;
}
