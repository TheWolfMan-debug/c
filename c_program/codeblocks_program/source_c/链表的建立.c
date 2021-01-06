#include <stdio.h>
#include <stdlib.h>

struct link *create(struct link *head,int n);
void display(struct link *head);
void deletememory(struct link *head);

struct link
{
    int data;
    struct link *next;
};

int main()
{
    struct link *head=NULL;
    int n;
    int i;
    printf("Input the length of the linked list:");
    scanf("%d",&n);
    head=create(head,n);
    display(head);
    deletememory(head);
    return 0;

}

struct link *create(struct link *head,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        struct link *p=NULL,*pr=head;
        int data;
        p=(struct link *)malloc(n*sizeof(struct link));
        if(p==NULL)
        {
            printf("The memory is not enough!!!");
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
        printf("What data do you want to create?");
        scanf("%d",&p->data);
        p->next=NULL;
    }
    return head;
}

void display(struct link *head)
{
    struct link *pr=head;
    do
    {
        printf("%d ",pr->data);
        pr=pr->next;
    }while(pr!=NULL);
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
