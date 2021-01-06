/*编程打印以下图案
编程打印以下图案。
   ******
  ******
 ******
******   */

#include <stdio.h>
#define N 6 //*的数量
#define M 4 //行数
#define J 3 //' '的数量 j-n>=-1 第一行的数量
int main()
{
    int i,j;
    for(i=0;i<M;i++)
    {
        for(j=0;j<J-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<N;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
