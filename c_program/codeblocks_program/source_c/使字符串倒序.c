#include <stdio.h>
#include <string.h>

char *reverse(char *s)
{
    char *start=s,temp;
    char *end=s+strlen(s)-1;
    while(start<=end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++,end--;
    }
    return s;
}

int main()
{
    char s[100]="abcdef";
    puts(reverse(s));
    printf("%d",strlen(s));
}
