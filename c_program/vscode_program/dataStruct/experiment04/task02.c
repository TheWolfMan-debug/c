#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef int qtype;
typedef struct
{
    int arrive;
    int treat; //客户的信息结构
} QNODE;
typedef struct node
{
    QNODE data;
    struct node *next; //队列中的元素信息
} LNODE, *QueuePtr;

typedef struct
{                   //链队列类型
    QueuePtr front; //队头指针
    QueuePtr rear;  //队尾指针
} LinkQueue;
void initqueue(LinkQueue *q)
{
    q->front = q->rear = (QueuePtr)malloc(sizeof(LNODE));
    if (!q->front)
        return;
    q->front->next = NULL;
}
void push(LinkQueue *q, qtype e1, qtype e2)
{

    LNODE *p = (QueuePtr)malloc(sizeof(LNODE));
    if (!p)
        return;
    p->data.arrive = e1;
    p->data.treat = e2;
    p->next = NULL;
    q->rear->next = p;
    q->rear = p;
}
void pop(LinkQueue *q, qtype *e1, qtype *e2)
{
    if (q->front == q->rear)
        return;
    LNODE *p = q->front->next;
    *e1 = p->data.arrive;
    *e2 = p->data.treat;
    q->front->next = p->next;
    if (q->rear == p)
        q->rear = q->front;
    free(p);
}

int main()
{
    int salesman_t = 0, client_t = 0, client_n = 0, clock = 0;
    int tclock = 0;
    char Fname[120] = "client_data.txt";
    FILE *fp;
    if ((fp = fopen(Fname, "r")) == NULL)
    {
        printf("文件打开出错");
        return 0;
    }
    LinkQueue q;
    initqueue(&q);

    QNODE temp, c;
    int have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
    do
    {
        if (q.front == q.rear && have == 2) //等待队列为空，即业务员需要等待
        {
            salesman_t += (temp.arrive - clock);
            clock = temp.arrive;
            push(&q, temp.arrive, temp.treat);
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
        }
        pop(&q, &c.arrive, &c.treat);
        client_n++;
        client_t += (clock - c.arrive);
        tclock = clock + c.treat;
        while (tclock > temp.arrive && have == 2)
        {
            push(&q, temp.arrive, temp.treat);
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
        }
        clock = tclock;
    } while (have == 2 || q.front->next);
    
    printf("业务员等待时间为%d\n客户等待的总时间为%d\n客户总人数为%d\n", salesman_t, client_t, client_n);
    system("pause");
    return 0;
}
