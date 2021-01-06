/* 给定一个数组input[ ], 如果数组长度n为奇数，则将数组中最大的元素放到output[ ]数组最中间的位置，
如果数组长度n为偶数，则将数组种最大的元素放到output [ ]数组中间两个位置偏右的那个位置上，然后
再按从大到小的顺序，依次在第一个位置的两边，按照一左一右的顺序，依次存放剩下的数。
例如：若input [ ]={3 , 6 , 1 , 9 , 7} 那么，output[ ]={3, 7, 9, 6 ,1}；
若input[ ]={3 , 6 , 1 , 9 , 7 , 8} 那么，output[ ]={1 , 6 , 8 , 9 , 7 , 3}. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define N 20

int main()
{
    int n, i, input[N], max, a[N], j, temp,count01=1,count02=1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
        a[i] = input[i];
    }

    //找最大
    max = input[0];
    for (i = 0; i < n; i++)
    {
        if (max < input[i])
        {
            max = input[i];
        }
    }

    //排序
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

        input[n / 2] = a[0];
        for (i = 1; i < n; i++)
        {
            if (i % 2 == 1)
            {
                input[n / 2 - count01] = a[i];
                count01++;
            }
            else
            {
                input[n / 2 + count02] = a[i];
                count02++;
            }
        }
    

    for (i = 0; i < n; i++)
    {
        printf("%d ", input[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
