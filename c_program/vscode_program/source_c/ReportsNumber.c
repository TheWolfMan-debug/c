#include <stdio.h>
#include <stdlib.h>

struct mylink
{
    int data;
    struct mylink *next;
};
typedef struct mylink link;

link *AppendNode(link *head, int n)
{
    link *p = head, *pr = NULL;
    int i;
    for (i = 0; i < n; i++)
    {
        p = (link *)malloc(sizeof(link));
        if (!p)
        {
            exit(0);
        }
        else
        {

            if (!head)
            {
                head = p;
            }
            else
            {
                pr = head;
                while (pr->next != NULL)
                {
                    pr = pr->next;
                }
                pr->next = p;
            }
            p->data = i + 1;
            p->next = NULL;
        }
    }
    p->next = head;
    return head;
}

void showNode(link *head, int n)
{
    link *p = head;
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", p->data);
        p = p->next;
        if(i%20==0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

void deleteNode(link **head, link *p)
{
    link *pr = *head;
    if (p == *head)
    {
        *head = p->next;
    }
    while (pr->next != p)
    {
        pr = pr->next;
    }
    pr->next = p->next;
}

void fr(link *head, int n)
{
    link *p = head, *pr = NULL;
    int i;
    for (i = 0; i < n; i++)
    {
        pr = p;
        p = p->next;
        free(pr);
    }
}


//运用删除节点的方法，算法较为简单
int main()
{
    link *head = NULL, *p = NULL, *pr = NULL;
    int i, j, k, m, n, l;
    printf("Input n and m:\n");
    scanf("%d%d", &n, &m); //n表示人数，m表示报的数字
    l = n;

    head = AppendNode(head, n); //创建循环列表
    p = head;

    while (l != 1)
    {
        showNode(head, l);
        i = m;
        while (i)
        {
            pr = p;
            p = p->next;
            i--;
        }
        deleteNode(&head, pr);
        l--;
    }

    printf("The result is:\n%d\n", head->data);

    free(head);

    system("pause");
    return 0;
}


//运用将节点数据置为零的方法，较为复杂
/* int main()
{
    link *head = NULL, *p = NULL;
    int i, j, k, m , n , l;
    printf("Input n and m:\n");
    scanf("%d%d", &n, &m); //n表示人数，m表示报的数字
    l = n;

    head = AppendNode(head, n); //创建循环列表
    p = head;

    showNode(head, n); //展示链表节点

    while (l != 1)
    {
        i = m;
        while (i != 1)
        {

            if (p->data != 0)
            {
                p = p->next;
                while (p->data == 0)
                {
                    p = p->next;
                }
            }
            else
            {
                while (p->data == 0)
                {
                    p = p->next;
                }
            }
            i--;
        }
        p->data = 0;
        while (p->data == 0)
        {
            p = p->next;
        }
        showNode(head, n);
        l--;
    }

    p = head;
    while (!p->data)
    {
        p = p->next;
    }


    printf("The result is:\n%d\n", p->data);

    fr(head, n); //释放节点

    system("pause");
    return 0;
} */
