#include <stdio.h>
int main()
{
    char a[1000],*p,b[2000],i;
    printf("ÇëÊäÈëÄãµÄĞÕÃû£º");
    scanf("%s",&a);
    p=&a;
    for(i=0;*p!='\0'; )
    {
        b[i++]=*p;
        b[i++]=' ';
        p++;
    }
    b[i]='\0';
    printf("%s",b);
    return 0;
}
