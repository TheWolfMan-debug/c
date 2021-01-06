#if 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

typedef struct NODE
{
    struct NODE *link;
    int value;
} Node;

void create(Node **head, int n)
{
    Node *p, *pr;
    int i;

    for (i = 0; i < n; i++)
    {
        p = (Node *)malloc(sizeof(Node));
        if (*head == NULL)
        {
            *head = p;
            pr = p;
        }
        else
        {
            while (pr->link != NULL)
            {
                pr = pr->link;
            }
            pr->link = p;
        }
        scanf("%d", &p->value);
        p->link = NULL;
    }
}

int insert(register Node **linkp, int new_value)
{
    register Node *current;
    register Node *new;

    while ((current = *linkp) != NULL && current->value < new_value)
    {
        linkp = &current->link;
    }

    new = (Node *)malloc(sizeof(Node));
    if (new == NULL)
    {
        return 0;
    }
    else
    {
        new->value = new_value;
    }

    new->link = current;
    *linkp = new;
    return 1;
}

void show(Node *head)
{
    Node *p = head;
    while (p)
    {
        printf("%d ", p->value);
        p = p->link;
    }
    putchar('\n');
    // printf("\n");
}

void fr(Node *head)
{
    Node *p = head, *pr = head;
    while (p)
    {
        pr = p->link;
        free(p);
        p = pr;
    }
    // printf("释放成功！！！\n ");
}

int main()
{
    Node *head = NULL;
    int n, x;
    printf("How many?\n");
    scanf("%d", &n);

    create(&head, n);
    show(head);

    printf("Input insert value:\n");
    scanf("%d", &x);

    if (insert(&head, x))
    {
        printf("插入成功！！！\n");
    }
    else
    {
        printf("插入失败！！！\n");
    }
    show(head);

    fr(head);

    system("pause");
    return 0;
}

#endif

