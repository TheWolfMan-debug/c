#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int InitQueue(LinkQueue *Q)
{
    Q->front = (QueuePtr)malloc(sizeof(LNODE));
    if (!Q->front)
    {
        exit(-1);
    }
    Q->rear = Q->front;
    Q->front->next = NULL;
    return 1;
}

int DestroyQueue(LinkQueue *Q)
{
    while (Q->front)
    {
        Q->rear = Q->front->next;
        free(Q->front);
        Q->front = Q->rear;
    }
    return 1;
}

int EnQueue(LinkQueue *Q, QNODE e)
{
    QueuePtr p = (QueuePtr)malloc(sizeof(LNODE));
    if (!p)
    {
        exit(-1);
    }
    p->data = e;
    Q->rear->next = p;
    Q->rear = p;
    return 1;
}

int DeQueue(LinkQueue *Q, QNODE *e)
{
    if (Q->front == Q->rear)
    {
        return -1;
    }
    QueuePtr p = Q->front->next;
    *e = p->data;
    Q->front->next = p->next;
    if (Q->rear == p)
    {
        Q->rear = Q->front;
    }
    free(p);
    return 1;
}

int main()
{

    //设置统计初值：业务员等待时间，客户总的待时间，客户总人数等
    int salemanTime = 0, clientTime = 0, clientNumber = 0;
    int currentClientTime = 0;
    int clock = 0;

    //打开文件
    char Fname[120] = "client_data.txt";
    FILE *fp;
    if ((fp = fopen(Fname, "r")) == NULL)
    {
        printf("文件打开出错");
        return 0;
    }

    //建立队列
    LinkQueue Q;
    InitQueue(&Q);
    //读入第一位客户信息于暂存变量中
    QNODE temp;
    QNODE e;
    int have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);

    do
    {
        if (Q.front == Q.rear && have == 2) //等待队列为空，并且还有客户
        {
            // 等待队列为空时
            salemanTime += (temp.arrive - clock);                    // 累计业务员总等待时间
            clock = temp.arrive;                                   // 时钟推进到暂存变量中的客户的到达时间
            EnQueue(&Q, temp);                                     // 暂存变量中的客户信息进队；
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat); // 读取下一位客户信息于暂存变量；
        }
        DeQueue(&Q, &e);                //从等待队列出队一位客户；
        clientNumber++;                 // 累计客户人数；
        clientTime += clock - e.arrive; //将该客户的等待时间累计到客户的总等待时间；
        currentClientTime = clock + e.treat;

        while (currentClientTime > temp.arrive && have == 2)
        {
            EnQueue(&Q, temp);
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
        }
        clock = currentClientTime;
    } while (have == 2 || Q.front->next); //等待队列不为空或者还有客户（have==2）

    printf("业务员等待时间为%d\n客户等待的总时间为%d\n客户总人数为%d\n", salemanTime, clientTime, clientNumber);
    printf("\n");
    system("pause");
    return 0;
}
