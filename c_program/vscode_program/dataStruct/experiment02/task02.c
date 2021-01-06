// ��1������һ�����Ա�
// ��2��������������Ԫ��1,2,3,4,5,6,7,8,9,10��
// ��3��ɾ������Ԫ��5��
// ��4��������ʾ��ǰ���Ա��е�����Ԫ�ء�
// ��������Ա������Ԫ�ظ����������²��ᳬ��100����Ҫ��ʹ�õ�����
// ��������3������ĵط����б�ʶ�������߼����󣬶������еĴ�����ϸ������
// Ҫ��ͬѧ���޸Ĵ���Ĵ��룬�ϻ����Բ��õ���ȷ�����н����

// 1.�������������еĴ���
// 2.��д�ϲ�����������������ĵ�����ϲ���һ����������
// 3.���ʵ�鱨���׫д��

#include <stdio.h> /*���ļ�����printf()�Ⱥ���*/
#include <stdlib.h>/*���ļ�����exit()�Ⱥ���*/
#include <malloc.h>/*���ļ�����malloc()�Ⱥ���*/

typedef int DataType; /*����DataTypeΪint*/

typedef struct Node
{
    DataType data;
    struct Node *next;
} SLNode;

void ListInitiate(SLNode **head) /*��ʼ��*/
{
    /*������ڴ�ռ䣬����ͷ���ռ䲢ʹͷָ��headָ��ͷ���*/
    if ((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL)
        exit(1);
    (*head)->next = NULL; /*����β���NULL */
}

int ListLength(SLNode *head) /* ������ĳ���*/
{
    SLNode *p = head; /*pָ����Ԫ���*/
    int size = 0;     /*size��ʼΪ0*/

    while (p->next != NULL) /*ѭ������*/
    {
        p = p->next;
        size++;
    }
    return size;
}

int ListInsert(SLNode *head, int i, DataType x)
/*�ڴ�ͷ���ĵ�����head������Ԫ��ai��0 �� i �� size�����ǰ*/
/*����һ���������Ԫ��x�Ľ��*/
{
    SLNode *p, *q;
    int j;

    p = head; /*pָ����Ԫ���*/
    j = -1;   /*j��ʼΪ-1*/
    while (p->next != NULL && j < i - 1)
    /*������ָ��pָ������Ԫ��ai-1���*/
    {
        p = p->next;
        j++;
    }

    if (j != i - 1)
    {
        printf("����λ�ò�����");
        return 0;
    }

    /*�����½����ָ��qָʾ*/
    if ((q = (SLNode *)malloc(sizeof(SLNode))) == NULL)
        exit(1);
    q->data = x;

    //�˶γ�����һ������
    q->next = p->next; /*��ָ��q->next��ֵ*/
    p->next = q;       /*��ָ��p->next���¸�ֵ*/
    return 1;
}

int ListDelete(SLNode *head, int i, DataType *x)
/*ɾ����ͷ���ĵ�����head������Ԫ��ai��0 �� i �� size - 1�����*/
/*ɾ����������Ԫ����ֵ��x���ء�ɾ���ɹ�ʱ����1��ʧ�ܷ���0*/
{
    SLNode *p, *s;
    int j;

    p = head; /*pָ����Ԫ���*/
    j = -1;   /*j��ʼΪ-1*/
    while (p->next != NULL && p->next->next != NULL && j < i - 1)
    /*������ָ��pָ������Ԫ��ai-1���*/
    {
        p = p->next;
        j++;
    }

    if (j != i - 1)
    {
        printf("ɾ��λ�ò�����");
        return 0;
    }

    //�˶γ�����һ������
    s = p->next;       /*ָ��sָ������Ԫ��ai���*/
    *x = s->data;      /*��ָ��s��ָ��������Ԫ����ֵ����x*/
    p->next = s->next; /*������Ԫ��ai���ӵ�������ɾ��*/
    free(s);           /*�ͷ�ָ��s��ָ�����ڴ�ռ�*/
    return 1;
}

int ListGet(SLNode *head, int i, DataType *x)
/*ȡ����Ԫ��ai��ɾ��������ͬ��ֻ�ǲ�ɾ������Ԫ��ai���*/
{
    SLNode *p;
    int j;

    p = head;
    j = -1;
    while (p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }

    if (j != i)
    {
        printf("ȡԪ��λ�ò�����");
        return 0;
    }

    //�˶γ�����һ������
    *x = p->data;
    return 1;
}

void Destroy(SLNode **head)
{
    SLNode *p, *p1;

    p = *head;
    while (p != NULL)
    {
        p1 = p;
        p = p->next;
        free(p1);
    }
    *head = NULL;
}

void MergeList_L(SLNode *La, SLNode *Lb, SLNode **Lc)
{
    SLNode *pa = La->next;
    SLNode *pb = Lb->next;
    SLNode *pc = La;
    *Lc = La;

    while (pa && pb)
    {
        if (pa->data <= pb->data)
        {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }
        else
        {
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }

    pc->next = pa ? pa : pb;
    free(Lb);
}

// ��ӡ����
void print(SLNode *p)
{
    int i, x;
    for (i = 0; i < ListLength(p); i++)
    {
        if (ListGet(p, i, &x) == 0) /*ȡԪ��*/
        {
            printf("����! \n");
            return;
        }
        else
            printf("%d    ", x); /*��ʾ����Ԫ��*/
    }
    printf("\n");
}

void main(void)
{
    // ����La
    SLNode *La;
    // ��ʼ��La
    ListInitiate(&La);
    ListInsert(La, 0, 1);
    ListInsert(La, 1, 3);
    ListInsert(La, 2, 5);

    // ����Lb
    SLNode *Lb;
    // ��ʼ��Lb
    ListInitiate(&Lb);
    ListInsert(Lb, 0, 2);
    ListInsert(Lb, 1, 4);
    ListInsert(Lb, 2, 6);
    ListInsert(Lb, 3, 8);

    // ����Lc
    SLNode *Lc;
    // ��ʼ��La
    ListInitiate(&Lc);

    printf("La:\n");
    print(La);
    printf("Lb:\n");

    print(Lb);

    // �ϲ�La,LbΪLc
    MergeList_L(La, Lb, &Lc);
    printf("�ϲ���Lc:\n");
    print(Lc);

    // �ͷ��ڴ�
    Destroy(&Lc);

    printf("\n");
    system("pause");
}