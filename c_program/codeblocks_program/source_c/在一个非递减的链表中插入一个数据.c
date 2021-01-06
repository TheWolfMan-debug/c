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

#include <stdio.h>
#include <stdlib.h>
#define N 6

struct link{
    int data;
    struct link *next;
};

int main()
{
    struct link *p=NULL,*head=NULL,*pr=NULL,*pi,*temp;
    int i,pdata,nodedata;
    printf("输入数组6个元素的值。\n");
    for(i=0;i<N;i++)
    {
        pr=head;
        p=(struct link*)malloc(sizeof(struct link));
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
        scanf("%d",&p->data);
        p->next=NULL;
    }
    printf("此链表各个结点的数据域为：");
    pr=head;
    while(pr!=NULL)
    {
        printf("%d ",pr->data);
        pr=pr->next;
    }
    printf("\n")
    pr=head;
    printf("输入要插入的数据x:");
    scanf("%d",&pi->data);
    nodedata=pi->data;
    pi->next=NULL;
    if(head==NULL)
    {
        head=pi;
    }
    else
    {
        while(pr->data<nodedata&&pr->next!=NULL)
        {
            temp=pr;
            pr=pr->next;
        }
        if(pr->data>=nodedata)
        {
            if(pr==head)
            {
                pi->next=head;
                head=pi;
            }
            else
            {
                pr=temp;
                pi->next=pr->next;
                pr->next=pi;
            }
        }
        else
        {
            pr->next=pi;
        }
    }
    printf("插入后链表各个结点的数据域为：");
    pr=head;
    while(pr!=NULL)
    {
        printf("%d ",pr->data);
        pr=pr->next;
    }
    return 0;
}
