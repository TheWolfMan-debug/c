#include <stdio.h>
#include <stdlib.h>
#define N 3

struct mylink
{
    int data;
    struct mylink *next;
};
typedef struct mylink link;

void addNode(link **head)
{
    link *p, *pr;
    p = (link *)malloc(sizeof(link *));
    if (p == NULL)
    {
        printf("No enough memory!!!\n");
        exit(0);
    }
    else
    {
        if (*head == NULL)
        {
            *head = p;
        }
        else
        {
            pr = *head;
            while (pr->next != NULL)
            {
                pr = pr->next;
            }
            pr->next = p;
        }
        scanf("%d", &p->data);
        p->next = NULL;
    }
}

link *AppendNode(link *head)
{
    link *p = NULL, *pr = head; //每次都将pr指向头指针
    int data;
    p = (link *)malloc(sizeof(link));
    if (p == NULL)
    {
        printf("No enough memory to allocate!\n");
        exit(0);
    }
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        while (pr->next != NULL)
        {
            pr = pr->next;
        }
        pr->next = p;
    }

    scanf("%d", &data);
    p->data = data;
    p->next = NULL;
    return head;
}

void deleteNoode(link **head, int x)
{
    link *p = *head, *pr = NULL;
    if (*head == NULL)
    {
        printf("Error!!!\n");
        exit(0);
    }
    else
    {
        while (p && p->data != x)
        {
            pr = p;
            p = p->next;
        }
        if (p == NULL)
        {
            printf("NOt Found!!!\n");
            return;
        }
        else if (p == *head)
        {
            *head = (*head)->next;
        }
        else
        {
            pr->next = p->next;
        }
    }
}

void findNode(link **head, int y)
{
    link *p = *head;
    while (p && p->data != y)
    {
        p = p->next;
    }
    if (p == NULL)
    {
        printf("Not found!!!\n");
    }
    else
    {
        printf("The node exist!!！\n");
    }
}

void insertNode(link **head, int z)
{
    link *p = *head, *pr = *head, *temp = NULL;
    temp = (link *)malloc(sizeof(link *));
    if (temp != NULL)
    {
        temp->data = z;
        temp->next = NULL;
        while (p && p->data < z)
        {
            pr = p;
            p = p->next;
        }
        if (p == *head)
        {
            temp->next = *head;
            *head = temp;
        }
        else if (p)
        {
            if (p->data == z)
            {
                temp->next = p->next;
                p->next = temp;
            }
            else
            {
                pr->next = temp;
                temp->next = p;
            }
        }
        else
        {
            pr->next = temp;
            temp->next = NULL;
        }
    }
}

void showNode(link *head)
{
    link *p = head;
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void fr(link *head)
{
    link *p = head, *pr = NULL;
    while (p != NULL)
    {
        pr = p;
        p = p->next;
        free(pr);
    }
}

int main()
{
    link *head = NULL;
    int i, x, y, z;

    for (i = 0; i < N; i++)
    {
        //添加节点
        // addNode(&head);
        head=AppendNode(head);
    }

    showNode(head);

    // //删除节点
    // printf("Please input what you want to delete:\n");
    // scanf("%d", &x);
    // deleteNoode(&head, x);

    // showNode(head);

    // //查找节点
    // printf("Please input what you want to find:\n");
    // scanf("%d", &y);
    // findNode(&head, y);

    // showNode(head);

    // //插入节点
    // printf("Please input what you want to insert:\n");
    // scanf("%d", &z);
    // insertNode(&head, z);

    // showNode(head);

    fr(head);

    system("pause");
    return 0;
}
