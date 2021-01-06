#include <stdio.h>
struct student
{
    char name[30];
    struct student *next;
};
int main()
{
    struct student s1={"a",NULL};
    struct student s2={"b",NULL};
    struct student s3={"c",NULL};
    struct student s4={"d",NULL};
    struct student *p;
    p=&s1;
    s1.next=&s2;
    s2.next=&s3;
    s3.next=&s4;
    while(1)
    {
        if(p->next!=NULL)
        {
            printf("%s\n",p->name);
            p=p->next;
        }
        else
        {
            printf("%s\n",p->name);
            break;
        }
    }
    return 0;
}
