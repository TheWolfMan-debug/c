#include <stdio.h>

int main()
{
    printf("你好，中国\n");

    system("pause");
    return 0;
}







//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 3
//
//struct mylink
//{
//    int data;
//    struct mylink *next;
//};
//typedef struct mylink link;
//
//link *AppendNode(link *head)
//{
//    link *p = head, *pr = NULL;
//    p = (link *)malloc(sizeof(link ));
//    if (!p)
//    {
//        exit(0);
//    }
//    else
//    {
//
//        if (!head)
//        {
//            head = p;
//        }
//        else
//        {
//            pr = head;
//            while (pr->next != NULL)
//            {
//                pr = pr->next;
//            }
//            pr->next = p;
//        }
//        scanf("%d", &p->data);
//        p->next = NULL;
//    }
//    return head;
//}
//
//void showNode(link *head)
//{
//    link *p = head;
//    while (p)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void fr(link *head)
//{
//    link *p = head, *pr = NULL;
//    while (p)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//
//int main()
//{
//    link *head = NULL;
//    int i;
//    for (i = 0; i < N; i++)
//    {
//        head = AppendNode(head);
//    }
//
//    // showNode(head);
//
//    fr(head);
//
//    system("pause");
//    return 0;
//}
//






//#include <stdio.h>
//#include <stdlib.h>
//struct link *AppendNode(struct link *head);
//void DisplayNode(struct link *head);
//void DeleteMemory(struct link *head);
//struct link *Addlink(struct link *head,int x);
//
//struct link
//{
//    int data;
//    struct link *next;
//};
//
//int main()
//{
//    int i = 1;
//
//    struct link *head = NULL;   //创建头指针
//    printf("输入数组3个元素的值。\n");
//
//    for(;i<=3;i++)
//    {
//        head = AppendNode(head);
//    }
//
//    printf("此链表各个结点的数据域为：");
//    DisplayNode(head);
//    printf("输入要插入的数据x:");
//    int c;
//    scanf("%d",&c);
//    head = Addlink(head,c);
//    DisplayNode(head);
//
//    DeleteMemory(head);
//
////    system("pause");
//
//    return 0;
//}
//
//struct link *AppendNode(struct link *head)
//{
//    struct link *p = NULL,*pr = head;     //每次都将pr指向头指针
//    int data;
//    p = (struct link *)malloc(sizeof(struct link));
//    if(p == NULL)
//    {
//        printf("No enough memory to allocate!\n");
//        exit(0);
//    }
//    if(head == NULL)
//    {
//        head = p;
//
//    }
//    else
//    {
//        while(pr->next != NULL)
//        {
//            pr = pr->next;
//        }
//        pr->next = p;
//    }
//
//    scanf("%d",&data);
//    p->data = data;
//    p->next = NULL;
//    return head;
//
//}
//
//void DisplayNode(struct link *head)
//{
//    struct link *p = head;
//
//    while (p!=NULL)
//    {
//        printf("%d ",p->data);
//        p = p->next;
//    }
//    printf("\n");
//}
//
//void DeleteMemory(struct link *head)
//{
//    struct link *p = head,*pr = NULL;
//    while(p!=NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//
//struct link *Addlink(struct link *head,int x)
//{
//    struct link *p = NULL,*pr = head;
//    int i = 1;
//    p = (struct link *)malloc(sizeof(struct link));
//    p->data = x;
//    while(p!=NULL)
//    {
//        if(i == 1)
//        {
//            if(x<=head->data)
//            {
//
//                p->next = head;
//                return p;
//            }
//
//        }
//        else
//        {
//            if(x<pr->next->data)
//            {
//
//                p->next = pr->next;
//                pr->next = p;
//                return head;
//            }
//            else
//            {
//                pr = pr->next;
//            }
//        }
//        i++;
//    }
//}




//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <malloc.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 3
//struct mylink
//{
//    int data;
//    struct mylink *next;
//};
//typedef struct mylink link;
//
//void createN(link **head)
//{
//    link *p,*pr;
//    p=(link *)malloc(sizeof(link *));
//    if(p==NULL)
//    {
//        printf("No enough memory!\n");
//        exit(0);
//    }
//    else
//    {
//        if(*head==NULL)
//        {
//            *head=p;
//        }
//        else
//        {
//            pr=*head;
//            while(pr->next!=NULL)
//            {
//                pr=pr->next;
//            }
//            pr->next=p;
//        }
//        scanf("%d",&p->data);
//        p->next=NULL;
//    }
//
//}
//
//void display(link *head)
//{
//    link *p=head;
//    while(p)
//    {
//        printf("%d ",p->data);
//        p=p->next;
//    }
//    printf("\n");
//}
//
//void fr(link *head)
//{
//    link *p=head,*pr=NULL;
//    while(p!=NULL)
//    {
//        pr=p;
//        p=p->next;
//        free(pr);
//    }
//}
//
//int main()
//{
//    link *head=NULL;
//    int i;
//
//    for(i=0;i<N;i++)
//    {
//        createN(&head);
//    }
//
//    display(head);
//
//    fr(head);
//
//    system("pause");
//    return 0;
//}






//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("hello,vscode\n");
//    printf("你好，中国\n");
//
//    // int i=1;
//    // while(i)
//    // {
//    //     printf("%d\n",i++);
//    // }
//
//    system("pause");
//    return 0;
//}
