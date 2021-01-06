#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double transform(double S)
{
    return S * 9 / 2 + 32;
}

int main()
{
    double S;

    while (1)
    {
        scanf("%lf", &S);
        if(S<0)
        {
            break;
        }
        printf("ÉãÊÏÎÂ¶È£º%.2f »ªÊÏÎÂ¶È£º%.2f\n", S, transform(S));
    }

    system("pause");
    return 0;
}