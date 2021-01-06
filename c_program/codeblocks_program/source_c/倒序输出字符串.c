#include <stdio.h>
#include <string.h>
int main()
{
    char a[100],temp;
    int i=0,j=0;
    printf("Input your string:\n");
    gets(a);
    for(i=0,j=strlen(a)-1;i<=j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    puts(a);
    return 0;
}
