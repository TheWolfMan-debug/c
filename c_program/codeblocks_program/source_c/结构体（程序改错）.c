#include <stdio.h>
struct s
{
    char name[10];
    int age;
};
void main()
{
    struct s a[3] = {{"John",19},{"Paul",17},{"Marry",18}};
    struct s *p;
    int i;
    for(p = a,i=0; i < 3; i++,p++)
    {
        printf("%s,%d\n", p->name, p->age );
    }

}
