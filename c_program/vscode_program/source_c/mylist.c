#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
                                                                                  
struct link
{
    int data;
    struct link *pre;
    struct link *next;
};
typedef struct link Link;

void lCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
        }
        else
        {
            pr->next = p;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    pr->next = NULL;
}

void hCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            pr->next = NULL;
        }
        else
        {
            p->next = pr;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    *head = pr;
    // pr->next = NULL;
}

void rCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
        }
        else
        {
            pr->next = p;
            pr = p;
            pr->next = *head;
        }
        scanf("%d", &p->data);
    }
}

void tCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
            (*head)->pre = NULL;
        }
        else
        {
            pr->next = p;
            p->pre = pr;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    pr->next = NULL;
}

void circleCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
            (*head)->pre = NULL;
        }
        else
        {
            pr->next = p;
            p->pre = pr;
            pr = p;
            pr->next = *head;
            (*head)->pre = pr;
        }
        scanf("%d", &p->data);
    }
}

void print(Link *head)
{
    Link *p = head;
    printf("The link is:\n");
    while (p)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
}

void printR(Link *head, int n)
{
    int i;
    Link *p = head->next;
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
}

void printT(Link *head)
{
    Link *p = head, *pr = head;
    printf("The link is:\n");
    while (p)
    {
        printf("%3d", p->data);
        pr = p;
        p = p->next;
    }
    printf("\n");

    printf("The reserve link is:\n");
    while (pr)
    {
        printf("%3d", pr->data);
        pr = pr->pre;
    }
    printf("\n");
}

void printC(Link *head, int n)
{
    int i;
    Link *p = head->next;
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->pre;
    }
    printf("\n");
}

void fr(struct link *head)
{
    struct link *p = head, *pr = head;
    while (p != NULL)
    {
        pr = p;
        p = p->next;
        free(pr);
    }
}

int main()
{
    Link *head = NULL;
    int n;
    printf("Please input how many nodes you want to create:\n");
    scanf("%d", &n);

    //    头插法链表
    hCreateL(&head, n);
    print(head);

    //尾插法链表
    // lCreateL(&head, n);
    // print(head);

    //循环链表
    // rCreateL(&head, n);
    // printR(head, n);

    //双向链表
    // tCreateL(&head, n);
    // printT(head);

    //双向循环链表
    // circleCreateL(&head, n);
    // printC(head, n);

    fr(head);

    system("pause");
    return 0;
}
