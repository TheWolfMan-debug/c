/*按如下格式打印100以内整数的平方根表。



**输出格式要求："%7d" （表头）  "%d" （每行开始数字） "%7.3f" （平方根）*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i,j;
    float x=0;
    for(j=0;j<10;j++)
    {
        printf("%7d",j);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d",i);
        for(j=0;j<10;j++)
        {
            printf("%7.3f",sqrt(x));
            x++;
        }
        printf("\n");
    }
    return 0;
}
