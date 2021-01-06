#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <assert.h>
#include <locale.h>

#define N 10

void initarray(int array[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        array[i] = i + 5;
    }
}

void printarray(int array[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int binarraysearch(int array[], int n)
{
    int mid = (N - 1) / 2, max = N - 1, min = 0;
    while (min <= max)
    {
        if (array[mid] == n)
        {
            return mid;
        }
        else if (array[mid] > n)
        {
            max = mid - 1;
        }
        else if (array[mid] < n)
        {
            min = mid + 1;
        }
        mid = (max + min) / 2;
    }
    return -1;
}

int main()
{
    int array[N];
    int n, x;
    scanf("%d", &n);

    initarray(array);
    printarray(array);
    x = binarraysearch(array, n);

    if (x != -1)
    {
        printf("%d\n", x);
    }
    else
    {
        printf("数组中不存在这个数\n");
    }

    putchar('\n');
    system("pause");
    return 0;
}
