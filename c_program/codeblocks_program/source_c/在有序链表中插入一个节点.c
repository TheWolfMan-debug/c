#include <stdio.h>
#include <stdlib.h>
struct link
{
    int num;
    struct link *next;
};

int main()
{
    int i,x;
    struct link *head=NULL,*p=NULL,*pr=NULL,*temp;
    p=(struct link*)malloc(sizeof(struct link));
    if(p==NULL)
    {
        printf("no enough memory to allocate!\n");
        exit(0);
    }
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
    printf("��������6��Ԫ�ص�ֵ��\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&p->num);
        p=p->next;
    }
    p->next=NULL;
    pr=head;
    printf("����Ҫ���������x:");
    scanf("%d",&x);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        while(pr->num<x&&pr->next!=NULL)
        {
            temp=pr;
            pr=pr->next;
        }
        if(pr->num>=x)
        {
            if(pr==head)
            {
                p->next=head;
                head=p;
            }
            else
            {
                pr=temp;
                p->next=pr->next;
                pr->next=p;
            }
        }
        else
        {
            pr->next=p;
        }
    }
    p=head;
    while(p->next!=NULL)
    {
        printf("%d",p->num);
        p=p->next;
    }
    return 0;
}
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
