#include <stdio.h>
#include <string.h>
void MyStrCat(char *dest, char *source);

void main()
{
    char    first[80];
    char    second[80];

    printf("Input the first string:");
    gets(first);
    printf("Input the second string:");
    gets(second);
    MyStrCat(first, second);
    printf("The result is : %s\n", first);
}

void MyStrCat(char *dest, char *source)
{
    int i = 0, j = 0;

    while (*(dest+i)!='\0')
    {
        i++;
    }
    for (; *(source+j)!='\0'; i++,j++)
    {
        *(dest+i) = *(source+j);
    }
    *(dest+i) = '\0';
}
