#include <stdio.h>
#define N 6

int main()
{
    char a[N];
    int i;
    fgets(a,sizeof(a),stdin);
    a[i]='\0';
    for(i=0;i<N-1;i++)
    {
        printf("%c",a[i]+4);
    }
    return 0;
}
