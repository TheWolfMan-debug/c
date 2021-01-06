#include <stdio.h>
#include <stdlib.h>
struct link
{
    int num;
    struct link *next;
};

int main()
{
    int i,x;
    struct link *head=NULL,*p=NULL,*pr=NULL,*temp;
    p=(struct link*)malloc(sizeof(struct link));
    if(p==NULL)
    {
        printf("no enough memory to allocate!\n");
        exit(0);
    }
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        while(pr->next!=NULL)
        {
            pr=pr->next;
        }
        pr->next=p;
    }
    printf("输入数组6个元素的值。\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&p->num);
        p=p->next;
    }
    p->next=NULL;
    pr=head;
    printf("输入要插入的数据x:");
    scanf("%d",&x);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        while(pr->num<x&&pr->next!=NULL)
        {
            temp=pr;
            pr=pr->next;
        }
        if(pr->num>=x)
        {
            if(pr==head)
            {
                p->next=head;
                head=p;
            }
            else
            {
                pr=temp;
                p->next=pr->next;
                pr->next=p;
            }
        }
        else
        {
            pr->next=p;
        }
    }
    p=head;
    while(p->next!=NULL)
    {
        printf("%d",p->num);
        p=p->next;
    }
    return 0;
}
/*在一个有序(按非递减顺序)的链表中插入一个元素为x的结点，使插入后的链表仍然有序（链表数据域为整型数，N为6）。
**输入提示："输入数组6个元素的值。\n"
**输入格式："%d"
**输出提示："此链表各个结点的数据域为："
**输出格式："%d "   (注：所有数据输出结束后有一个回车)
**输入提示："输入要插入的数据x:"
**输入格式："%d"
**输出提示："插入后链表各个结点的数据域为："
**输出格式："%d "  (注：所有数据输出结束后有一个回车)


程序运行示例如下：
输入数组6个元素的值。↙
12 23 34 45 56 67
此链表各个结点的数据域为：12 23 34 45 56 67 ↙
输入要插入的数据x:36
插入后链表各个结点的数据域为：12 23 34 36 45 56 67↙*/
