#include <stdio.h>

void Squeeze(char s[], char c);

void main()
{
    char a[80], c;

    scanf("%s", a);
    scanf(" %c", &c);
    Squeeze(a,c);
    printf("%s\n", a);
}

void Squeeze(char s[], char c)
{
    int i, j=0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j]='\0';
}
