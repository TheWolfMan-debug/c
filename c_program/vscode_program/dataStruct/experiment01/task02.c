// ����һ�γ�����룬�����������ɵĹ���Ϊ��
// ��1������һ�����Ա�
// ��2��������������Ԫ��1,2,3,4,5,6,7,8,9,10��
// ��3��ɾ������Ԫ��5��
// ��4��������ʾ��ǰ���Ա��е�����Ԫ�ء�
// ��������Ա������Ԫ�ظ����������²��ᳬ��100����Ҫ��ʹ��˳���
// ��������3������ĵط����б�ʶ�������߼�����
// �������еĴ�����ϸ������Ҫ��ͬѧ���޸Ĵ���Ĵ��룬
// �޸ĺ��ϻ����Եõ���ȷ�����н����

// 1.�������������еĴ���
// 2.��д�ϲ��������������������Ա�ϲ�Ϊһ����������������м��Բ��ԡ�
// 3.���ʵ�鱨���׫д��

#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int DataType;

typedef struct
{
    DataType list[MaxSize];
    int size;
} SeqList;

void ListInitiate(SeqList *L) /*��ʼ��˳���L*/
{
    L->size = 0; /*�����ʼ����Ԫ�ظ���*/
}

int ListLength(SeqList L) /*����˳���L�ĵ�ǰ����Ԫ�ظ���*/
{
    return L.size;
}

int ListInsert(SeqList *L, int i, DataType x)
/*��˳���L��λ��i��0 �� i �� size��ǰ��������Ԫ��ֵx*/
/*����ɹ�����1������ʧ�ܷ���0*/
{
    int j;
    if (L->size >= MaxSize)
    {
        printf("˳��������޷�����! \n");
        return 0;
    }
    else if (i < 0 || i > L->size)
    {
        printf("����i���Ϸ�! \n");
        return 0;
    }
    else
    { //�˶γ�����һ������
        for (j = L->size; j > i; j--)
            L->list[j] = L->list[j - 1]; /*Ϊ������׼��*/
        L->list[i] = x;                  /*����*/
        L->size++;                       /*Ԫ�ظ�����1*/
        return 1;
    }
}

int ListDelete(SeqList *L, int i, DataType *x)
/*ɾ��˳���L��λ��i��0 �� i �� size - 1��������Ԫ��ֵ����ŵ�����x��*/
/*ɾ���ɹ�����1��ɾ��ʧ�ܷ���0*/
{
    int j;
    if (L->size <= 0)
    {
        printf("˳����ѿ�������Ԫ�ؿ�ɾ! \n");
        return 0;
    }
    else if (i < 0 || i > L->size - 1)
    {
        printf("����i���Ϸ�");
        return 0;
    }
    else
    { //�˶γ�����һ������

        *x = L->list[i]; /*����ɾ����Ԫ�ص�����x��*/
        for (j = i; j <= L->size - 1; j++)
            L->list[j] = L->list[j + 1]; /*����ǰ��*/
        L->size--;                       /*����Ԫ�ظ�����1*/
        return 1;
    }
}

int ListGet(SeqList L, int i, DataType *x)
/*ȡ˳���L�е�i������Ԫ�ص�ֵ����x�У��ɹ��򷵻�1��ʧ�ܷ���0*/
{
    if (i < 0 || i > L.size - 1)
    {
        printf("����i���Ϸ�! \n");
        return 0;
    }
    else
    {
        *x = L.list[i];
        return 1;
    }
}

void MergeList(SeqList La, SeqList Lb, SeqList *Lc)
{
    int i = 0, j = 0, k = 0;
    DataType a, b;
    int La_len = ListLength(La);
    int Lb_len = ListLength(Lb);

    while ((i < La_len) && (j < Lb_len))
    {
        ListGet(La, i, &a);
        ListGet(Lb, j, &b);
        if (a <= b)
        {
            ListInsert(Lc, k++, a);
            ++i;
        }
        else
        {
            ListInsert(Lc, k++, b);
            ++j;
        }
    }
    while (i < La_len)
    {
        ListGet(La, i++, &a);
        ListInsert(Lc, k++, a);
    }
    while (j < Lb_len)
    {
        ListGet(Lb, j++, &b);
        ListInsert(Lc, k++, b);
    }
}

void main(void)
{
    SeqList myLista;
    int i, x;
    ListInitiate(&myLista);
    ListInsert(&myLista, 0, 1);
    ListInsert(&myLista, 1, 3);
    ListInsert(&myLista, 2, 5);
    ListInsert(&myLista, 3, 17);

    SeqList myListb;
    ListInitiate(&myListb);
    ListInsert(&myListb, 0, 2);
    ListInsert(&myListb, 1, 4);
    ListInsert(&myListb, 2, 6);
    ListInsert(&myListb, 3, 16);
    ListInsert(&myListb, 4, 46);

    SeqList myListc;
    ListInitiate(&myListc);


    printf("����a:\n");
    for (i = 0; i < ListLength(myLista); i++)
    {
        ListGet(myLista, i, &x); //�˶γ�����һ������
        printf("%d ", x);
    }
    printf("\n����b:\n");
    for (i = 0; i < ListLength(myListb); i++)
    {
        ListGet(myListb, i, &x); //�˶γ�����һ������
        printf("%d ", x);
    }

    MergeList(myLista, myListb, &myListc);


    printf("\n�ϲ���\n");

    for (i = 0; i < ListLength(myListc); i++)
    {
        ListGet(myListc, i, &x); //�˶γ�����һ������
        printf("%d ", x);
    }

    printf("\n");

    system("pause");

}







