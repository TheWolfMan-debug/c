#include <stdio.h>
unsigned long Factorial(int n)
{
	if (n < 0)
	{

		return 0;
	}
	else if (n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n-1);
	}
}
int main()
{
    int n;
    long x;
	printf("Input n:\n");
	scanf("%d",&n);
	x = Factorial(n);
	if(x==0)
    {
        printf("data error!");
    }
	else
    {
        printf("%d!=%ld\n", n, x);
	    return 0;
    }
}
