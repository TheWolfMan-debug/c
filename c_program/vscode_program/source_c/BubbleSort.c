#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 10

void BubbleSort(int a[])
{
    int i,j,temp;
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void print(int a[])
{
    int i;
    printf("排序后：\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {12, 2, 16, 30, 28, 10, 16, 20, 6, 18};

    // BubbleSort(array);
    print(array);

    system("pause");
    return 0;
}
