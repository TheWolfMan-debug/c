#include <stdio.h>
struct date
{
    int  y;
    int m;
    int d;
};
struct stu
{   char n[10];
    struct date b;
    int a;
}s={"Wang",{1980,12,11},30};
void main()
{
    printf("%s,%d,%d\n",s.n,s.b.d,s.a);
}
