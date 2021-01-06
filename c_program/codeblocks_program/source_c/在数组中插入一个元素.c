#include <stdio.h>
#include <string.h>

void str_intsert(char *p1,char x,int pos);

int main()
{
    char p[100];
    int pos;
    char x;
    printf("Input your original string:\n");
    gets(p);
    printf("What you want to insert:\n");
    scanf("%c",&x);
    printf("Where you want to insert\n");
    scanf("%d",&pos);
    str_intsert(p,x,pos);
    puts(p);
    return 0;
}
void str_intsert(char *p1,char x,int pos)
{
    int i=0,j;
    for( ;p1[i]!='\0';i++)
    {
        if(i==pos)
        {

            p1[strlen(p1)+1]='\0';
            for(j=strlen(p1);j>i;j--)
            {
                p1[j]=p1[j-1];
            }
            p1[i]=x;
        }
    }
}
