


// #include <stdio.h>
// #include <stdlib.h>

// #define N 3

// struct mylink
// {
//     int data;
//     struct mylink *next;
// };
// typedef struct mylink link;

// link *AppendNode(link *head)
// {
//     link *p = head, *pr = NULL;
//     p = (link *)malloc(2*sizeof(double));
//     if (!p)
//     {
//         exit(0);
//     }
//     else
//     {
//         if (!head)
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
//         scanf("%d", &p->data);
//         p->next = NULL;
//     }
//     return head;
// }

// void showNode(link *head)
// {
//     link *p = head;
//     while (p)
//     {
//         printf("%d ", p->data);
//         p = p->next;
//     }
//     printf("\n");
// }

// void fr(link *head)
// {
//     link *p = head, *pr = NULL;
//     while (p)
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

//     printf("%d\n",sizeof(head));
//     printf("%d\n",sizeof(double));
//     // for (i = 0; i < N; i++)
//     // {
//     //     head = AppendNode(head);
//     // }

//     // showNode(head);


//     fr(head);

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
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
//     struct link *head = NULL; //创建头指针

//     head = AppendNode(head);

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
//     while (p != NULL)
//     {
//         pr = p;
//         p = p->next;
//         free(pr);
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     printf("hello,code::blocks\n");
//     printf("hello,code::blocks\n");

//     printf("hello,code::blocks\n");

//     printf("hello,code::blocks\n");

//     printf("hello,code::blocks\n");

//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");

//     system("pause");
//     return 0;
// }
