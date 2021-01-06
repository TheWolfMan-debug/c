#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//两层循环
int main()
{
    int n, m, i, j;
    double sum = 0, aSum = 0;
    printf("Input the number and lines:\n");
    scanf("%d%d", &n, &m);

    while (m)
    {
        sum = 0;
        for (i = 0; i < m; i++)
        {
            sum += (n * pow(10, i));
        }
        printf("%.0lf\n", sum);
        m--;
    }

    system("pause");
    return 0;
}

//递归
// int print(int n, int m)
// {
//     int i,sum=0;
//     if (m == 1)
//     {
//         printf("%d\n", n);
//         return 0;
//     }
//     else
//     {
//         for (i = 0; i < m; i++)
//         {
//             sum += (n * pow(10, i));
//         }
//         printf("%d\n",sum);
//         return print(n, m - 1);
//     }
// }

// int main()
// {
//     int n, m, i;
//     double sum = 0, aSum = 0;
//     printf("Input the number and lines:\n");
//     scanf("%d%d", &n, &m);

//     print(n, m);

//     system("pause");
//     return 0;
// }

//递归
// int print(int n, int m)
// {
//     int i;
//     if (m == 1)
//     {
//         printf("%d\n", n);
//         return 0;
//     }
//     else
//     {
//         for (i = 0; i < m; i++)
//         {
//             printf("%d", n);
//         }
//         printf("\n");
//         return print(n,m-1);
//     }
// }

// int main()
// {
//     int n, m, i;
//     double sum = 0, aSum = 0;
//     printf("Input the number and lines:\n");
//     scanf("%d%d", &n, &m);

//     print(n, m);

//     system("pause");
//     return 0;
// }

//一层循环
// int main()
// {
//     int n, m, i;
//     double sum = 0, aSum = 0;
//     printf("Input the number and lines:\n");
//     scanf("%d%d", &n, &m);

//     printf("---------------------------\n");

//     for (i = 0; i < m; i++)
//     {
//         sum += (n * pow(10, i));
//         aSum += sum;
//         printf("%.0lf\n", sum);
//     }

//     printf("---------------------------\n");

//     printf("%.0lf\n", aSum);
//     system("pause");
//     return 0;
// }