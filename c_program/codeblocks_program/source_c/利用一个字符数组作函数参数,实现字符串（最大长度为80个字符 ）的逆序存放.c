#include <stdio.h.>
void Inverse(char str[]);

void main()
{
    char str[80];
    printf("Input a string:\n");
    gets(str);
    Inverse(str);
}
void Inverse(char str[])
{
    char ptr[80];
    int i,sum=0,j;
    for(i=0;str[i]!='\0';i++)
    {
        sum++;
    }
    for(j=0,i=sum-1;i>=0;i--,j++)
    {
        ptr[j]=str[i];
    }
      ptr[j]='\0';
      printf("Inversed results:\n");
      puts(ptr);
}
