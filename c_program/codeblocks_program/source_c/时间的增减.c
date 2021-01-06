#include <stdio.h>
int main()
{
    int hour,minute,second,hour1,minute1,second1;
    int n;
    printf("Input your primary time:\n");
    scanf("%d%d%d",&hour,&minute,&second);
    printf("Input the add time:\n");
    scanf("%d%d%d",&hour1,&minute1,&second1);
    n=(hour+hour1)*3600+(minute+minute1)*60+(second+second1);
    hour=n/3600%24;
    minute=n/60%60;
    second=n%60;
    printf("The final time:\n");
    printf("%d ±%d∑÷%d√Î",hour,minute,second);
    return 0;
}
