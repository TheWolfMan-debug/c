#include <stdio.h>
double s(int n);
int main()
{
    int n;
    printf("请输入n的值：\n");
    scanf("%d",&n);
    printf("n项之和为：%lf\n",s(n));
    return 0;
}
double s(int n)
{
    double sum=0;
    int i;
    if(n==1)
        {
            sum=2;
            return sum;
        }
        else
        {
            for(i=1;i<=n;i++)


        }

}
