#include <stdio.h>
int main()
{
    int n;
    char *monthName[] = {"Illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Input month number:");
    scanf("%d", &n);
    if ((n<=12)&&(n>=1))
    {
        printf("month %d is %s\n", n,monthName[n]);

    }
    else
    {
        printf("%s\n",monthName[0]);
    }
    return 0;
}
