#include <stdio.h>

#include <stdlib.h>

struct link *appendnode (struct link *head);

void displaynode(struct link *head);

void deletememory(struct link *head);

struct link
{
    int data;
    struct link *next;
};
int main(void)
{
    int i=0;
    char c;
    struct link *head=NULL;
    printf("do you want to append a new node (Y/N)?");
    scanf(" %c",&c);
    while (c=='Y'||c=='y')
    {
        head=appendnode(head);
        displaynode(head);
        printf("do you want to append a new node (Y/N)?");
        scanf(" %c",&c);
        i++;
    }
    printf("%d new codes have been appended!\n",i);
    deletememory(head);
}
struct link *appendnode (struct link *head)
{
    struct link *p=NULL,*pr=head;
    int data;
    p=(struct link *)malloc(sizeof(struct link));
    if(p==NULL)
    {
        printf("no enough memory to allocate!");
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
    printf("input node data:");
    scanf("%d",&data);
    p->data=data;
    p->next=NULL;
    return head;
}
void displaynode(struct link *head)
{
    struct link *p=head;
    int j=1;
    while(p!=NULL)
    {
        printf("%5d%10d\n",j,p->data);
        p=p->next;
        j++;
    }
}
void deletememory(struct link *head)
{
    struct link *p=head,*pr=NULL;
    while(p!=NULL)
    {
        pr=p;
        p=p->next;
        free(pr);
    }
}
