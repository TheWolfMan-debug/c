/*��һ������(���ǵݼ�˳��)�������в���һ��Ԫ��Ϊx�Ľ�㣬ʹ������������Ȼ��������������Ϊ��������NΪ6����
**������ʾ��"��������6��Ԫ�ص�ֵ��\n"
**�����ʽ��"%d"
**�����ʾ��"�������������������Ϊ��"
**�����ʽ��"%d "   (ע���������������������һ���س�)
**������ʾ��"����Ҫ���������x:"
**�����ʽ��"%d"
**�����ʾ��"����������������������Ϊ��"
**�����ʽ��"%d "  (ע���������������������һ���س�)


��������ʾ�����£�
��������6��Ԫ�ص�ֵ���L
12 23 34 45 56 67
�������������������Ϊ��12 23 34 45 56 67 �L
����Ҫ���������x:36
����������������������Ϊ��12 23 34 36 45 56 67�L*/

#include <stdio.h>
#include <stdlib.h>
#define N 6

struct link{
    int data;
    struct link *next;
};

int main()
{
    struct link *p=NULL,*head=NULL,*pr=NULL,*pi,*temp;
    int i,pdata,nodedata;
    printf("��������6��Ԫ�ص�ֵ��\n");
    for(i=0;i<N;i++)
    {
        pr=head;
        p=(struct link*)malloc(sizeof(struct link));
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
        scanf("%d",&p->data);
        p->next=NULL;
    }
    printf("�������������������Ϊ��");
    pr=head;
    while(pr!=NULL)
    {
        printf("%d ",pr->data);
        pr=pr->next;
    }
    printf("\n")
    pr=head;
    printf("����Ҫ���������x:");
    scanf("%d",&pi->data);
    nodedata=pi->data;
    pi->next=NULL;
    if(head==NULL)
    {
        head=pi;
    }
    else
    {
        while(pr->data<nodedata&&pr->next!=NULL)
        {
            temp=pr;
            pr=pr->next;
        }
        if(pr->data>=nodedata)
        {
            if(pr==head)
            {
                pi->next=head;
                head=pi;
            }
            else
            {
                pr=temp;
                pi->next=pr->next;
                pr->next=pi;
            }
        }
        else
        {
            pr->next=pi;
        }
    }
    printf("����������������������Ϊ��");
    pr=head;
    while(pr!=NULL)
    {
        printf("%d ",pr->data);
        pr=pr->next;
    }
    return 0;
}
