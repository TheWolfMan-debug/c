#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <assert.h>
#include <locale.h>

int main()
{
    
    double F,C;
    printf("请输入华氏温度：\n");
    scanf("%lf",&F);
    C = 5*(F-32)/9;
    printf("摄氏温度为：%7.2lf\n",C);

    system("pause");
    return 0;
}




// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <malloc.h>
// #include <stdio.h>
// #include <stdlib.h>

// #define STACK_INIT_SIZE 100

// typedef struct
// {
//     int p_x;
//     int p_y;
//     int ispass;
// } PosType; // 坐标位置

// typedef struct
// {
//     int ord;      // 通道快在路径上的“序号”
//     PosType seat; // 通道块在迷宫中的“坐标位置”
//     int di;       // 从此通道块走向下一通道块的“方向”

// } SElemType; // 栈的元素类型

// typedef struct
// {
//     SElemType *base; // 在栈构造之前和销毁之后，base的值为NULL
//     SElemType *top;  // 栈顶指针
//     int stacksize;   // 当前已分配的存储空间，以元素为单位
// } SqStack;

// void test01(SqStack *S)
// {
//     S->base = (SElemType *)malloc((STACK_INIT_SIZE) * sizeof(SElemType));
//     printf("成功\n");
// }

// void test02()
// {
//     SqStack S;
//     test01(&S);
// }

// int main(int argc, char const *argv[])
// {
//     test02();    

//     system("pause");
//     return 0;
// }

// //输入0 5  0  2 20
// //对应a b x0 y0 n
// #include <stdio.h>
// #include <math.h>
// #define f(x, y) (-1 * (x) * (y) * (y))
// void main(void)
// {
//     double a, b, x0, y0, k1, k2, k3, k4, h;
//     int n, i;
//     printf("input a,b,x0,y0,n:");
//     scanf("%lf%lf%lf%lf%d", &a, &b, &x0, &y0, &n);
//     printf("x0\t\ty0\t\tk1\t\tk2\t\tk3\t\tk4\n");
//     for (h = (b - a) / n, i = 0; i != n; i++)
//     {
//         k1 = f(x0, y0);
//         k2 = f(x0 + h / 2, y0 + k1 * h / 2);
//         k3 = f(x0 + h / 2, y0 + k2 * h / 2);
//         k4 = f(x0 + h, y0 + h * k3);
//         printf("%lf\t%lf\t", x0, y0);
//         printf("%lf\t%lf\t", k1, k2);
//         printf("%lf\t%lf\n", k3, k4);
//         y0 += h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
//         x0 += h;
//     }
//     printf("xn=%lf\tyn=%lf\n", x0, y0);
//     system("pause");
// }

// #include <stdio.h>
// #include <stdlib.h>
// // struct link *AppendNode(struct link *head);
// // void DisplayNode(struct link *head);
// // void DeleteMemory(struct link *head);
// // struct link *Addlink(struct link *head, int x);

// struct link
// {
//     int data;
//     struct link *next;
// };

// struct link *AppendNode(struct link *head)
// {
//     struct link *p = NULL, *pr = head; //每次都将pr指向头指针
//     int data;
//     p = (struct link *)malloc(sizeof(struct link));
//     if (p == NULL)
//     {
//         printf("No enough memory to allocate!\n");
//         exit(0);
//     }
//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         while (pr->next != NULL)
//         {
//             pr = pr->next;
//         }
//         pr->next = p;
//     }

//     scanf("%d", &data);
//     p->data = data;
//     p->next = NULL;
//     return head;
// }

// void DisplayNode(struct link *head)
// {
//     struct link *p = head;

//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void DeleteMemory(struct link *head)
// {
//     struct link *p = head, *pr = NULL;
//     int i = 0;
//     while (p != NULL)
//     {
//         printf("%d ", ++i);
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
//     printf("\n");
// }

// int main()
// {
//     int i = 1;

//     struct link *head = NULL; //创建头指针
//     printf("输入数组3个元素的值。\n");

//     for (i = 1; i <= 3; i++)
//     {
//         head = AppendNode(head);
//     }

//     printf("此链表各个结点的数据域为：");

//     DisplayNode(head);

//     DeleteMemory(head);

//     system("pause");

//     return 0;
// }

// #define N 3
// struct mylink
// {
//     int data;
//     struct mylink *next;
// };
// typedef struct mylink link;

// void createN(link **head)
// {
//     link *p, *pr;
//     p = (link *)malloc(sizeof(link *));
//     if (p == NULL)
//     {
//         printf("No enough memory!\n");
//         exit(0);
//     }
//     else
//     {
//         if (*head == NULL)
//         {
//             *head = p;
//         }
//         else
//         {
//             pr = *head;
//             while (pr->next != NULL)
//             {
//                 pr = pr->next;
//             }
//             pr->next = p;
//         }
//         scanf("%d", &p->data);
//         p->next = NULL;
//     }
// }

// void display(link *head)
// {
//     link *p = head;
//     while (p!=NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void fr(link *head)
// {
//     link *p = head, *pr = NULL;
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// int main()
// {
//     link *head = NULL;
//     int i;

//     for (i = 0; i < N; i++)
//     {
//         createN(&head);
//     }

//     display(head);

//     // fr(head);

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct link *AppendNode(struct link *head);
// void DisplayNode(struct link *head);
// void DeleteMemory(struct link *head);
// struct link *Addlink(struct link *head, int x);

// struct link
// {
//     int data;
//     struct link *next;
// };

// int main()
// {
//     int i = 1;

//     struct link *head = NULL; //创建头指针
//     printf("输入数组3个元素的值。\n");

//     for (; i <= 3; i++)
//     {
//         head = AppendNode(head);
//     }

//     printf("此链表各个结点的数据域为：");
//     DisplayNode(head);

//     // printf("输入要插入的数据x:");
//     // int c;
//     // scanf("%d", &c);
//     // head = Addlink(head, c);

//     // DisplayNode(head);

//     DeleteMemory(head);

//     system("pause");

//     return 0;
// }

// struct link *AppendNode(struct link *head)
// {
//     struct link *p = NULL, *pr = head; //每次都将pr指向头指针
//     int data;
//     p = (struct link *)malloc(sizeof(struct link));
//     if (p == NULL)
//     {
//         printf("No enough memory to allocate!\n");
//         exit(0);
//     }
//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         while (pr->next != NULL)
//         {
//             pr = pr->next;
//         }
//         pr->next = p;
//     }

//     scanf("%d", &data);
//     p->data = data;
//     p->next = NULL;
//     return head;
// }

// void DisplayNode(struct link *head)
// {
//     struct link *p = head;

//     while (p != NULL)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void DeleteMemory(struct link *head)
// {
//     struct link *p = head, *pr = NULL;
//     int i=0;
//     while (p != NULL)
//     {
//         printf("%d ",++i);
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// struct link *Addlink(struct link *head, int x)
// {
//     struct link *p = NULL, *pr = head;
//     int i = 1;
//     p = (struct link *)malloc(sizeof(struct link));
//     p->data = x;
//     while (p != NULL)
//     {
//         if (i == 1)
//         {
//             if (x <= head->data)
//             {

//                 p->next = head;
//                 return p;
//             }
//         }
//         else
//         {
//             if (x < pr->next->data)
//             {

//                 p->next = pr->next;
//                 pr->next = p;
//                 return head;
//             }
//             else
//             {
//                 pr = pr->next;
//             }
//         }
//         i++;
//     }
// }

// int main()
// {
//     int i, j, n;
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = n - i; j >= 1; j--)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= (i-1)*2+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// struct link
// {
//     int data;
//     struct link *next;
// };

// int main()
// {

//     struct link *p;
//     p = (struct link *)malloc(sizeof(struct link *));
//     p->data = 100;
//     printf("%d\n", p->data);
//     free(p);
//     printf("%d\n", p->data);

//     printf("hello,vscode!!!\n");
//     printf("hello,vscode!!!\n");
//     printf("hello,vscode!!!\n");
//     printf("hello,vscode!!!\n");
//     printf("hello,vscode!!!\n");

//     printf("你好，中国!!!\n");
//     printf("你好，中国!!!\n");
//     printf("你好，中国!!!\n");
//     printf("你好，中国!!!\n");
//     printf("你好，中国!!!\n");

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct link
// {
//     int data;
//     struct link *next;
// };

// int main()
// {
//     int i;
//     struct link *head=NULL,*p,*pr;
//     for(i=0; i<5; i++)
//     {
//         p=(struct link *)malloc(sizeof(struct link *));
//         if(p==NULL)
//         {
//             printf("No more memory!!!");
//             exit(0);
//         }
//         else
//         {
//             if(head==NULL)
//             {
//                 head=p;
//                 pr=head;
//             }
//             else
//             {
// //                while(pr->next!=NULL)
// //                {
// //                    pr=pr->next;
// //                }
// //                pr->next=p;

//                 pr->next=p;
//                 pr=p;

//             }
//             printf("Input data:\n");
//             scanf("%d",&p->data);
//             p->next=NULL;
//         }
//     }

//     pr=head;
//     while(pr!=NULL)
//     {
//         printf("%3d",pr->data);
//         pr=pr->next;
//     }

//     pr=head;
//     while(pr)
//     {
//         p=pr;
//         free(p);
//         pr=pr->next;

//     }

//     printf("\n");
//     return 0;
// }

// int main()
// {
//     int n,i,j;
//     printf("Input the length:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             if((i+j)%2==0)
//             {
//                 printf("男");
//             }
//             else
//             {
//                 printf("女");
//             }
//         }
//         printf("\n");
//     }
//     system("pause");
//     return 0;
// }

// int main()
// {
//     printf("hello,中国\n");

//     system("pause");
//     return 0;
// }

// struct link *AppendNode(struct link *head);
// void DisplayNode(struct link *head);
// void DeleteMemory(struct link *head);
// struct link
// {
//     int data;
//     struct link *next;
// };

// int main()
// {
//     int i = 0;
//     char c;
//     struct link *head = NULL;
//     printf("Do you want to append a new node(Y/N)?");
//     scanf(" %c", &c);
//     while (c == 'Y' || c == 'y')
//     {
//         head = AppendNode(head);
//         DisplayNode(head);
//         printf("Do you want to append a new node(Y/N)?");
//         scanf(" %c", &c);
//         i++;
//     }

//     printf("%d new nodes have been apended!\n", i);
//     DeleteMemory(head);

//     system("pause");
//     return 0;
// }

// struct link *AppendNode(struct link *head)
// {
//     struct link *p = NULL, *pr = head;
//     int data;
//     p = (struct link *)malloc(sizeof(struct link *));
//     if (p == NULL)
//     {
//         printf("No enough memory to allocate!\n");
//         exit(0);
//     }
//     if (head == NULL)
//     {
//         head = p;
//     }
//     else
//     {
//         while (pr->next != NULL)
//         {
//             pr = pr->next;
//         }
//         pr->next = p;
//     }
//     printf("Input node data:");
//     scanf("%d", &data);
//     p->data = data;
//     p->next = NULL;
//     return head;
// }

// void DisplayNode(struct link *head)
// {
//     struct link *p = head;
//     int j = 1;
//     while (p != NULL)
//     {
//         printf("%5d%10d\n", j, p->data);
//         p = p->next;
//         j++;
//     }
// }
// void DeleteMemory(struct link *head)
// {
//     struct link *p = head, *pr = NULL;
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// struct link
// {
//     int data;
//     struct link *pre;
//     struct link *next;
// };
// typedef struct link Link;

// void lCreateL(Link **head, int n)
// {
//     Link *p = *head, *pr = *head;
//     int i;
//     printf("Input the node data:\n");
//     for (i = 0; i < n; i++)
//     {
//         p = (Link *)malloc(sizeof(Link *));
//         if (p == NULL)
//         {
//             printf("There are no more memory!!!\n");
//             exit(1);
//         }
//         if (*head == NULL)
//         {
//             *head = p;
//             pr = *head;
//             (*head)->next = NULL;
//         }
//         else
//         {
//             pr->next = p;
//             pr = p;
//         }
//         scanf("%d", &p->data);
//     }
//     pr->next = NULL;
// }

// void hCreateL(Link **head, int n)
// {
//     Link *p = *head, *pr = *head;
//     int i;
//     printf("Input the node data:\n");
//     for (i = 0; i < n; i++)
//     {
//         p = (Link *)malloc(sizeof(Link *));
//         if (p == NULL)
//         {
//             printf("There are no more memory!!!\n");
//             exit(1);
//         }
//         if (*head == NULL)
//         {
//             *head = p;
//             pr = *head;
//             pr->next = NULL;
//         }
//         else
//         {
//             p->next = pr;
//             pr = p;
//         }
//         scanf("%d", &p->data);
//     }
//     *head = pr;
//     // pr->next = NULL;
// }

// void rCreateL(Link **head, int n)
// {
//     Link *p = *head, *pr = *head;
//     int i;
//     printf("Input the node data:\n");
//     for (i = 0; i < n; i++)
//     {
//         p = (Link *)malloc(sizeof(Link *));
//         if (p == NULL)
//         {
//             printf("There are no more memory!!!\n");
//             exit(1);
//         }
//         if (*head == NULL)
//         {
//             *head = p;
//             pr = *head;
//             (*head)->next = NULL;
//         }
//         else
//         {
//             pr->next = p;
//             pr = p;
//             pr->next = *head;
//         }
//         scanf("%d", &p->data);
//     }
// }

// void tCreateL(Link **head, int n)
// {
//     Link *p = *head, *pr = *head;
//     int i;
//     printf("Input the node data:\n");
//     for (i = 0; i < n; i++)
//     {
//         p = (Link *)malloc(sizeof(Link *));
//         if (p == NULL)
//         {
//             printf("There are no more memory!!!\n");
//             exit(1);
//         }
//         if (*head == NULL)
//         {
//             *head = p;
//             pr = *head;
//             (*head)->next = NULL;
//             (*head)->pre = NULL;
//         }
//         else
//         {
//             pr->next = p;
//             p->pre = pr;
//             pr = p;
//         }
//         scanf("%d", &p->data);
//     }
//     pr->next = NULL;
// }

// void circleCreateL(Link **head, int n)
// {
//     Link *p = *head, *pr = *head;
//     int i;
//     printf("Input the node data:\n");
//     for (i = 0; i < n; i++)
//     {
//         p = (Link *)malloc(sizeof(Link *));
//         if (p == NULL)
//         {
//             printf("There are no more memory!!!\n");
//             exit(1);
//         }
//         if (*head == NULL)
//         {
//             *head = p;
//             pr = *head;
//             (*head)->next = NULL;
//             (*head)->pre = NULL;
//         }
//         else
//         {
//             pr->next = p;
//             p->pre = pr;
//             pr = p;
//             pr->next = *head;
//             (*head)->pre = pr;
//         }
//         scanf("%d", &p->data);
//     }
// }

// void print(Link *head)
// {
//     Link *p = head;
//     printf("The link is:\n");
//     while (p)
//     {
//         printf("%3d", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void printR(Link *head, int n)
// {
//     int i;
//     Link *p = head->next;
//     printf("The link is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%3d", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void printT(Link *head)
// {
//     Link *p = head, *pr = head;
//     printf("The link is:\n");
//     while (p)
//     {
//         printf("%3d", p->data);
//         pr = p;
//         p = p->next;
//     }
//     printf("\n");

//     printf("The reserve link is:\n");
//     while (pr)
//     {
//         printf("%3d", pr->data);
//         pr = pr->pre;
//     }
//     printf("\n");
// }

// void printC(Link *head, int n)
// {
//     int i;
//     Link *p = head->next;
//     printf("The link is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%3d", p->data);
//         p = p->next;
//     }
//     printf("\n");
//     printf("The link is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%3d", p->data);
//         p = p->pre;
//     }
//     printf("\n");
// }

// void fr(struct link *head)
// {
//     struct link *p = head, *pr = head;
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// int main()
// {
//     Link *head = NULL;
//     int n;
//     printf("Please input how many nodes you want to create:\n");
//     scanf("%d", &n);

//     //    头插法链表
//     hCreateL(&head, n);
//     print(head);
//     // fr(head);

//     //尾插法链表
//     // lCreateL(&head, n);
//     // print(head);

//     //循环链表
//     // rCreateL(&head, n);
//     // printR(head, n);

//     //双向链表
//     // tCreateL(&head, n);
//     // printT(head);

//     //双向循环链表
//     // circleCreateL(&head, n);
//     // printC(head, n);

//     system("pause");
//     return 0;
// }

// struct link
// {
//     int data;
//     struct link *next;
// };

// int main()
// {
//     struct link *p, *pr, *head = NULL;
//     int i = -1;
//     p = (struct link *)malloc(sizeof(struct link *));
//     p->data = i * 100;
//     head = p;
//     p = p->next;
//     for (i = 0; i < 5; i++)
//     {
//         p = (struct link *)malloc(sizeof(struct link *));
//         p->data = i * 100;
//         p = p->next;
//     }

//     p = NULL;

//     pr = head;
//     while (pr != NULL)
//     {
//         printf("%3d", pr->data);
//         pr = pr->next;
//     }

//     printf("\n");

//     p = head;
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }

//     printf("\n");

//     pr = head;
//     while (pr != NULL)
//     {
//         printf("%3d", pr->data);
//         pr = pr->next;
//     }

//     system("pause");
//     return 0;
// }

// #define N 100

// struct friends
// {
//     char name[20];
//     char phone[12];
//     struct friends *next;
// };

// struct friends *AppendNode(struct friends *head)
// {
//     struct friends *p = NULL, *pr = head;
//     int i;
//     for (i = 0; i < 2; i++)
//     {
//         p = (struct friends *)malloc(sizeof(struct friends *));
//         if (head == NULL)
//         {
//             head = p;
//         }
//         else
//         {
//             pr = head;
//             while (pr->next != NULL)
//             {
//                 pr = pr->next;
//             }
//             pr->next = p;
//         }
//         printf("请依次输入每个联系人姓名，电话： \n");
//         scanf("%s %s", &p->name, &p->phone);
//         p->next = NULL;
//     }
//     return head;
// }

// void fr(struct friends *head)
// {
//     struct friends *p, *pr;
//     pr = (struct friends *)malloc(sizeof(struct friends *));
//     p = (struct friends *)malloc(sizeof(struct friends *));
//     p = head;
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// int main()
// {
//     struct friends *head=NULL;
//     head=AppendNode(head);
//     fr(head);
//     system("pause");
//     return 0;
// }

// int main()
// {
//     printf("你好，中国\n");
//     printf("hello,vscode\n");

//     system("pause");
//     return 0;
// }

// #define N 100

// int i = 0, j = 0, flag = 1, t = 0, flagN = 0, line[N], count = 0;

// int flagM = 1, tM = 0;

// int divideM(int n, int m)
// {
//     for (i = 0; i < count; i++)
//     {
//         printf("%d ", line[i]);
//     }
//     if (n == m)
//     {
//         if (n > 1)
//         {
//             divideM(n - 1, m);
//         }
//         return 0;
//     }
//     else
//     {
//         if (n >= m - n)
//         {
//             printf("%d %d\n", n, m - n);
//             if (flag && m != 2)
//             {
//                 divideM(n - 1, m);
//             }
//         }
//         else
//         {

//             printf("%d ", n);
//             flag = 0;
//             divideM(n, m - n);
//             flag = 1;
//             if (n != 1 && m == t)
//             {
//                 divideM(n - 1, m);
//             }
//         }
//     }
//     return 0;
// }

// int divideN(int n, int m)
// {
//     if (n == m)
//     {
//         if (flagN == 1)
//         {
//             printf("%d ", n);
//         }
//         else
//         {
//             printf("%d\n", n);
//         }
//         if (n > 1)
//         {
//             divideN(n - 1, m);
//         }
//         return 0;
//     }
//     else
//     {
//         if (n >= m - n)
//         {
//             printf("%d %d\n", n, m - n);
//             //将数字储存在数组中
//             line[count] = m - n;
//             count++;
//             for (i = count - 1; i >= 1; i++)
//             {
//                 if (line[count] > 1)
//                 {
//                     flagN = 1;
//                     tM = m - n;
//                     divideM(m - n, m - n);
//                     flagN = 0;
//                 }
//             }
//             if (flag && m != 2)
//             {
//                 //下一个数字开始
//                 divideN(n - 1, m);
//             }
//         }
//         else
//         {

//             printf("%d ", n);
//             flag = 0;
//             divideN(n, m - n);
//             flag = 1;
//             //将数字储存在数组中
//             line[count] = m - n;
//             count++;
//             for (i = count - 1; i >= 1; i++)
//             {
//                 if (line[count] > 1)
//                 {
//                     flagN = 1;
//                     tM = m - n;
//                     divideM(m - n, m - n);
//                     flagN = 0;
//                 }
//             }
//             if (n != 1 && m == t)
//             {
//                 //下一个数字开始
//                 divideN(n - 1, m);
//             }
//         }
//     }
//     count = 0;
//     return 0;
// }

// int main()
// {
//     int n, m;
//     printf("Input n:\n");
//     scanf("%d", &n);
//     scanf("%d", &m);
//     t = m;
//     printf("The result is:\n");
//     divideN(n, m);

//     system("pause");
//     return 0;
// }

// int flag = 1, t = 0;

// int divideN(int n, int m)
// {
//     if (n == m)
//     {
//         printf("%d\n", n);
//         if (n > 1)
//         {
//             divideN(n - 1, m);
//         }
//         return 0;
//     }
//     else
//     {
//         if (n >= m - n)
//         {
//             printf("%d %d\n", n, m - n);
//             if (flag && m != 2)
//             {
//                 divideN(n - 1, m);
//             }
//         }
//         else
//         {

//             printf("%d ", n);
//             flag = 0;
//             divideN(n, m - n);
//             flag = 1;
//             if (n != 1 && m == t)
//             {
//                 divideN(n - 1, m);
//             }
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int n, m;
//     printf("Input n:\n");
//     scanf("%d", &n);
//     scanf("%d", &m);
//     t = m;
//     printf("The result is:\n");
//     divideN(n, m);

//     system("pause");
//     return 0;
// }

// int Fibon1(int n)
// {
// 	if (n == 1 || n == 2)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return Fibon1(n - 1) + Fibon1(n - 2);
// 	}
// }
// int main()
// {
// 	int n = 0;
// 	int ret = 0;
// 	scanf("%d", &n);
// 	ret = Fibon1(n);
// 	printf("ret=%d\n", ret);
//     system("pause");
//     return 0;

// }

// // 1.问题描述：写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和。
// // 例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19。

// int DigitSum(int n)
// {
//     static int sum = 0;
//     if(n==0)
//     {
//         printf("\nThe sum of the number is:\n%d\n",sum);
//         return 0;
//     }
//     if((n/10)!=0)
//     {
//         printf("%d+", n % 10);
//     }
//     else
//     {
//         printf("%d", n % 10);
//     }
//     sum += n % 10;
//     DigitSum(n / 10);
// }

// int main()
// {
//     int n;
//     printf("Please input n:\n");
//     scanf("%d", &n);
//     printf("The breakdown of this number is:\n");
//     DigitSum(n);
//     system("pause");
//     return 0;
// }

/* struct link
{
    int data;
    struct link *pre;
    struct link *next;
};
typedef struct link Link;

void lCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link *));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
        }
        else
        {
            pr->next = p;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    pr->next = NULL;
}

void hCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link *));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            pr->next = NULL;
        }
        else
        {
            p->next = pr;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    *head = pr;
    // pr->next = NULL;
}

void rCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link *));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
        }
        else
        {
            pr->next = p;
            pr = p;
            pr->next = *head;
        }
        scanf("%d", &p->data);
    }
}

void tCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link *));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
            (*head)->pre = NULL;
        }
        else
        {
            pr->next = p;
            p->pre = pr;
            pr = p;
        }
        scanf("%d", &p->data);
    }
    pr->next = NULL;
}

void circleCreateL(Link **head, int n)
{
    Link *p = *head, *pr = *head;
    int i;
    printf("Input the node data:\n");
    for (i = 0; i < n; i++)
    {
        p = (Link *)malloc(sizeof(Link *));
        if (p == NULL)
        {
            printf("There are no more memory!!!\n");
            exit(1);
        }
        if (*head == NULL)
        {
            *head = p;
            pr = *head;
            (*head)->next = NULL;
            (*head)->pre = NULL;
        }
        else
        {
            pr->next = p;
            p->pre = pr;
            pr = p;
            pr->next = *head;
            (*head)->pre = pr;
        }
        scanf("%d", &p->data);
    }
}

void print(Link *head)
{
    Link *p = head;
    printf("The link is:\n");
    while (p)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
}

void printR(Link *head, int n)
{
    int i;
    Link *p = head->next;
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
}

void printT(Link *head)
{
    Link *p = head, *pr = head;
    printf("The link is:\n");
    while (p)
    {
        printf("%3d", p->data);
        pr = p;
        p = p->next;
    }
    printf("\n");

    printf("The reserve link is:\n");
    while (pr)
    {
        printf("%3d", pr->data);
        pr = pr->pre;
    }
    printf("\n");
}

void printC(Link *head, int n)
{
    int i;
    Link *p = head->next;
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->next;
    }
    printf("\n");
    printf("The link is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", p->data);
        p = p->pre;
    }
    printf("\n");
}

int main()
{
    Link *head = NULL;
    int n;
    printf("Please input how many nodes you want to create:\n");
    scanf("%d", &n);

    //头插法链表
    // hCreateL(&head, n);
    // print(head);

    //尾插法链表
    // lCreateL(&head, n);
    // print(head);

    //循环链表
    // rCreateL(&head, n);
    // printR(head, n);

    //双向链表
    // tCreateL(&head, n);
    // printT(head);

    //双向循环链表
    // circleCreateL(&head, n);
    // printC(head, n);

    system("pause");
    return 0;
} */

// unsigned long Factorial(int n)
// {
//     if (n < 0)
//     {
//         printf("data error!");
//         exit(1);
//     }
//     else if (n == 0 || n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * Factorial(n - 1);
//     }
// }
// int main()
// {
//     int n;
//     unsigned long x;
//     printf("Input n:\n");
//     scanf("%d", &n);
//     x = Factorial(n);
//     printf("%d!=%ld\n", n, x);
//     system("pause");
//     return 0;
// }

// // 请用指针数组编程实现按奥运会参赛国国名，在字典中的顺序对其入场次序进行排序。
// // 假设参赛国不超过150个。
// // 下面程序中存在比较隐蔽的错误，请通过分析和调试程序，发现并改正程序中的错误。
// // 注意：请将修改正确后的完整源程序拷贝粘贴到答题区内。
// // 对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
// // 当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
// // 经教师手工核对后，如果未用指针数组做函数参数编程，那么即使做对也不给分。
// // 改错时不能改变程序原有的意图，不能改变函数原型。
// #include <stdio.h>
// #define MAX_LEN 10
// #define N 150
// void SortString(char *ptr[], int n);
// int main()
// {
//     int i, n;
//     char *pStr[N];
//     printf("How many countries?\n");
//     scanf("%d", &n);
//     getchar();
//     printf("Input their names:\n");
//     for (i = 0; i < n; i++)
//     {
//         pStr[i] = (char *)malloc(sizeof(char *));
//         gets(pStr[i]);
//     }
//     SortString(pStr, n);
//     printf("Sorted results:\n");
//     for (i = 0; i < n; i++)
//     {
//         puts(pStr[i]);
//     }
//     return 0;
// }

// void SortString(char *ptr[], int n)
// {
//     int i, j;
//     char *temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (strcmp(ptr[j], ptr[i]) < 0)
//                 ;
//             {
//                 temp = ptr[i];
//                 ptr[i] = ptr[j];
//                 ptr[j] = temp;
//             }
//         }
//     }
// }

// void Squeeze(char *s, char c);

// int main()
// {
//     char a[80], c, *s = a;
//     gets(a);
//     // getchar();
//     scanf("%c", &c);
//     Squeeze(s, c);
//     printf("%s\n", s);
//     return 0;
// }
// void Squeeze(char *s, char c)
// {
//     int i, j = 0;
//     for (i = 0; *(s + i) != '\0'; i++)
//     {
//         if (*(s + i) != c)
//         {
//             *(s + j) = *(s + i);
//             j++;
//         }
//     }
//     *(s + j) = '\0';
// }

// _Bool judge(int n)
// {
//     return n > 5;
// }

// int main()
// {
//     system("cls");

//     int i, a[10] = {0};
//     for (i = 0; i < 10; i++)
//     {
//         a[i] = i;
//         if (judge(a[i]))
//         {
//             printf("ture\n");
//         }
//         else
//         {
//             printf("false\n");
//         }
//     }

//     system("pause");

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct list
// {
//     char name[100];
//     int height;
// };
// typedef struct list LIST;

// int main()
// {
//     LIST *person;
//     person=(struct list *)malloc(sizeof(struct list));
//     scanf("%s",person->name);
// //    strcpy(person->name,"wang");
//     person->height=200;
//     printf("name:%s\n",person->name);
//     printf("height:%d\n",person->height);

// //    struct list person;
// //    strcpy(person.name,"wang");
// //    person.height=180;
// //    printf("name为：%s\n",person.name);
// //    printf("%d\n",person.height);

//     system("pause");

//     return 0;
// }
