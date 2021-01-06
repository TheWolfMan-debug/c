#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

/* 
    N:总人口数
    t:时间
    S:易感者人数
    E:潜伏期人数
    I:已感染者
    R:已康复者
    D:死亡人数
    a:潜伏期感染概率
    1/a:平均潜伏期
    b:病毒传染给健康者的概率
    b2:潜伏者感染健康者概率
    r:治愈概率
    1/r:平均治愈天数
    r1:每天接触到的人数
    r2:每天接触到的潜伏者的人数
    R0:基本传染率
*/
double N = 1000, t, S = 1, E = 1, I = 1, R = 1, D = 1, a = 0.1, b = 0.1, b2 = 0.1, r = 0.1, r1 = 5, r2 = 5, R0 = 0.1;

#define Fs(t, S) (-(b * I * r * S / N + b2 * I * r2 * S / N) * t)
#define Fe(t, E) ((b * I * r * S / N + b2 * I * r2 * S / N - a * E) * t)
#define Fi(t, I) ((a * E - r * I) * t)


void algorithm(double a, double b, double x0, double y0, double n, int ch)
{
    double k1, k2, k3, k4, h;
    int i;
    for (h = (b - a) / n, i = 1; i != n; i++)
    {
        if (ch == 1)
        {
            k1 = Fs(x0, y0);
            k2 = Fs(x0 + h / 2, y0 + k1 * h / 2);
            k3 = Fs(x0 + h / 2, y0 + k2 * h / 2);
            k4 = Fs(x0 + h, y0 + h * k3);
        }
        else if (ch == 2)
        {
            k1 = Fe(x0, y0);
            k2 = Fe(x0 + h / 2, y0 + k1 * h / 2);
            k3 = Fe(x0 + h / 2, y0 + k2 * h / 2);
            k4 = Fe(x0 + h, y0 + h * k3);
        }
        else if (ch == 3)
        {
            k1 = Fi(x0, y0);
            k2 = Fi(x0 + h / 2, y0 + k1 * h / 2);
            k3 = Fi(x0 + h / 2, y0 + k2 * h / 2);
            k4 = Fi(x0 + h, y0 + h * k3);
        }


        if (i % 5 == 0)
        {
            printf("yn=%lf  ", y0);
        }

        y0 += h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x0 += h;
        if (i % 50 == 0)
        {
            printf("\n");
        }
    }
    printf("\n\n\n");
}

int main(void)
{
    double a = 0, b = 2, x0 = 0, y0 = 100, k1, k2, k3, k4, h;
    int n = 300, i;

    // printf("input a,b,x0,y0,n:");
    // scanf("%d", &n);

    printf("易感染人数变化:\n");
    algorithm(a, b, x0, y0, n, 1);

    printf("潜伏期人数变化:\n");
    algorithm(a, b, x0, y0, n, 2);

    printf("已感染人数变化:\n");
    algorithm(a, b, x0, y0, n, 3);


    system("pause");
    return 0;
}
