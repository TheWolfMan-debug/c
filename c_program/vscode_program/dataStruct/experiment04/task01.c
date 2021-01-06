#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int arrive;
    int treat; //�ͻ�����Ϣ�ṹ
} QNODE;
typedef struct node
{
    QNODE data;
    struct node *next; //�����е�Ԫ����Ϣ
} LNODE, *QueuePtr;

typedef struct
{                   //����������
    QueuePtr front; //��ͷָ��
    QueuePtr rear;  //��βָ��
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

    //����ͳ�Ƴ�ֵ��ҵ��Ա�ȴ�ʱ�䣬�ͻ��ܵĴ�ʱ�䣬�ͻ���������
    int salemanTime = 0, clientTime = 0, clientNumber = 0;
    int currentClientTime = 0;
    int clock = 0;

    //���ļ�
    char Fname[120] = "client_data.txt";
    FILE *fp;
    if ((fp = fopen(Fname, "r")) == NULL)
    {
        printf("�ļ��򿪳���");
        return 0;
    }

    //��������
    LinkQueue Q;
    InitQueue(&Q);
    //�����һλ�ͻ���Ϣ���ݴ������
    QNODE temp;
    QNODE e;
    int have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);

    do
    {
        if (Q.front == Q.rear && have == 2) //�ȴ�����Ϊ�գ����һ��пͻ�
        {
            // �ȴ�����Ϊ��ʱ
            salemanTime += (temp.arrive - clock);                    // �ۼ�ҵ��Ա�ܵȴ�ʱ��
            clock = temp.arrive;                                   // ʱ���ƽ����ݴ�����еĿͻ��ĵ���ʱ��
            EnQueue(&Q, temp);                                     // �ݴ�����еĿͻ���Ϣ���ӣ�
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat); // ��ȡ��һλ�ͻ���Ϣ���ݴ������
        }
        DeQueue(&Q, &e);                //�ӵȴ����г���һλ�ͻ���
        clientNumber++;                 // �ۼƿͻ�������
        clientTime += clock - e.arrive; //���ÿͻ��ĵȴ�ʱ���ۼƵ��ͻ����ܵȴ�ʱ�䣻
        currentClientTime = clock + e.treat;

        while (currentClientTime > temp.arrive && have == 2)
        {
            EnQueue(&Q, temp);
            have = fscanf(fp, "%d %d", &temp.arrive, &temp.treat);
        }
        clock = currentClientTime;
    } while (have == 2 || Q.front->next); //�ȴ����в�Ϊ�ջ��߻��пͻ���have==2��

    printf("ҵ��Ա�ȴ�ʱ��Ϊ%d\n�ͻ��ȴ�����ʱ��Ϊ%d\n�ͻ�������Ϊ%d\n", salemanTime, clientTime, clientNumber);
    printf("\n");
    system("pause");
    return 0;
}
