/*��̼���1*2*3 + 3*4*5 + ... + 99*100*101��ֵ

����Ҫ��������
���Ҫ��"sum=%d"*/

#include <stdio.h>
int main()
{
    int i,num=1,sum=0;
    for(i=2;i<=100;i+=2)
    {
        num=(i-1)*i*(i+1);
        sum+=num;
    }
    printf("sum=%d",sum);
    return 0;
}
