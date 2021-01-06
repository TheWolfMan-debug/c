#include <stdio.h>

int main()
{
    float x,y,z;
    printf("Man \t Women \t Childern\n");
    for (x=1; x<16; x++)
        {
            for (y=1; y<25; y++)
        {
            z = 30 - x - y;
            if (3 * x + 2 * y + z == 50)
                        printf("%.0f\t %.0f\t %.0f\n",x,y,z);
        }
        }
        return 0;
}
