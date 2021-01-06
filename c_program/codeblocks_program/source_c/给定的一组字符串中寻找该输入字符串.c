#include <stdio.h>
#include <string.h>
void main()
{
    int i=0, findFlag=1;
    char x[13];
    char *str[6]={ "Pascal","Basic","Fortran", "Java","Visual C", "Visual Basic" };
    char *ptr=*str;
    printf("Input string:\n");
    gets(x);
    while( i<6 && findFlag)
    {
        if(strcmp(x,ptr)==0)
        {
            findFlag = 0;
        }
        ptr++;
        i++;

    }
    if (!findFlag)
    {
        printf("%s\n",x);
    }
    else
    {
         printf("Not find!\n");
    }
}
