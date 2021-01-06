#include <stdio.h>
#include <stdlib.h>
#define N 80

struct link *AppendNode(struct link *head,int n);//建立一个指定长度的有序链表
void DisplayNode(struct link *head);//打印建立的有序链表
struct link *DeleteMemory(struct link *head,int nodeData);//删除链表中的一个指定数据的数
void redisplayNode(struct link *head);//打印删除指定数据后链表的数据
struct link *InsertNode(struct link *head,int nodeData);//在链表中插入一个指定数据
void seconddisplayNode(struct link *head);//再次打印插入后链表中的数据
void explain();

struct link
{
    int data;
    struct link *next;
};

int main(void)
{
    struct link *head=NULL;
    int n;
    int nodeData;
    int nodeData2;
    explain();
    printf("How many nodes do you want to create?\n");
    scanf("%d",&n);
    head=AppendNode(head,n);
    DisplayNode(head);
    printf("What count do you want to delete?\n");
    scanf("%d",&nodeData);
    head=DeleteMemory(head,nodeData);
    redisplayNode(head);
    printf("What count do you want to insert?\n");
    scanf("%d",&nodeData2);
    InsertNode(head,nodeData2);
    seconddisplayNode(head);
}

void explain()
{
    printf("一：建立一个指定长度的有序链表\n");
    printf("二：打印出已建立的链表的数据\n");
    printf("三：删除链表中的一个指定数据\n");
    printf("四：打印出已删除的链表的数据\n");
    printf("五：向链表中插入一个数据\n");
    printf("六：打印出插入后链表的数据\n");
}
struct link *AppendNode(struct link *head,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        struct link *p=NULL,*pr=head;
        int data;
        p=(struct link*)malloc(sizeof(struct link));
        if(p==NULL)
        {
            printf("No enough memory to allocate!\n");
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
        printf("Input the node data:");
        scanf("%d",&p->data);
        p->next=NULL;
    }
    return head;
}

void DisplayNode(struct link *head)
{
    struct link *p;
    p=head;
    while(p!=NULL)
    {
        printf("%3d",p->data);
        p=p->next;
    }
    printf("\n");
}

struct link *DeleteMemory(struct link *head,int nodeData)
{
    struct link *p=head,*pr=head;
    if(head==NULL)
    {
        printf("Linked Table is empty!\n");
        return(head);
    }
    while(nodeData!=p->data&&p->next!=NULL)
    {
        pr=p;
        p=p->next;
    }
    if(nodeData==p->data)
    {
        if(p==head)
        {
            head=p->next;
        }
        else
        {
            pr->next=p->next;
        }
        free(p);
    }
    else
    {
        printf("This Node has not been found!\n");
    }
    return head;
}

void redisplayNode(struct link *head)
{
    struct link *p;
    p=head;
    while(p!=NULL)
    {
        printf("%3d",p->data);
        p=p->next;
    }
    printf("\n");
}

struct link *InsertNode(struct link *head,int nodeData)
{
    struct link *pr=head,*p=head,*temp=NULL;
    p=(struct link*)malloc(sizeof(struct link));
    if(p==NULL)
    {
        printf("No enough memory!\n");
        exit(0);
    }
    p->next=NULL;
    p->data=nodeData;
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        while(pr->data<nodeData&&pr->next!=NULL)
        {
            temp=pr;
            pr=pr->next;
        }
        if(pr->data>=nodeData)
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
    return head;
}

void seconddisplayNode(struct link *head)
{
    struct link *p;
    p=head;
    while(p!=NULL)
    {
        printf("%3d",p->data);
        p=p->next;
    }
    printf("\n");
}
