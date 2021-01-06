#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define max 10

void myInput(int array[])
{
    int i;
    for (i = 0; i < max; i++)
    {
        array[i] = i + 2;
    }
}

int main()
{
#if 0
    printf("hello,vscode!\n");
    printf("hello,vscode!\n");
    printf("hello,vscode!\n");
    printf("hello,vscode!\n");
    printf("hello,vscode!\n");

#endif

    // int array[max];
    // int i;
    // myInput(array);
    // for (i = 0; i < max; i++)
    // {
    //     printf("%d ", array[i]);
    // }
    // printf("\n");

    printf("hello,vscode!\n");
    printf("hello,vscode!\n");
    printf("你好，中国!\n");
    system("pause");
    return 0;
}

// int main()
// {

//     int m = 0, n = 0;
//     char c;
//     while ((c = getchar()) != '\n')
//     {
//         if (c >= 'A' && c <= 'Z')
//         {
//             m++;
//         }
//         if (c >= 'a' && c <= 'z')
//         {
//             n++;
//         }
//     }
//     printf("%d\n", m > n ? m : n);
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
//     struct link *head, *pr, *p;

//     p = (struct link *)malloc(sizeof(struct link *));

//     scanf("%d", &p->data);

//     printf("%d\n", p->data);

//     free(p);

//     printf("%d\n", p->data);

//     system("pause");
//     return 0;
// }

// struct linK
// {
//     int data;
//     struct linK *next;
// };
// typedef struct linK link;

// int main()
// {
//     int i;
//     link *head = NULL, *p, *pr;
//     p = (link *)malloc(sizeof(link *));
//     scanf("%d", &p->data);
//     head = p;

//     for (i = 0; i < 3; i++)
//     {
//         pr = (link *)malloc(sizeof(link *));
//         scanf("%d", &pr->data);
//         p->next = pr;

//         p = p->next;
//         // p->next = NULL;
//     }

//     p->next = NULL;

//     pr = head;
//     while (pr)
//     {
//         printf("%d", pr->data);
//         pr = pr->next;
//     }
//     printf("\n");

//     pr = head;
//     while (pr!=NULL)
//     {
//         p = pr;
//         pr = pr->next;
//         // free(p);
//     }

//     pr = head;
//     while (pr)
//     {
//         printf("%d", pr->data);
//         pr = pr->next;
//     }
//     printf("\n");

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct linK
// {
//     int data;
//     struct linK *next;
// };
// typedef struct linK link;

// int main()
// {
//     int i;
//     link *head = NULL, *p, *pr;
//     p = (link *)malloc(sizeof(link *));
//     scanf("%d", &p->data);
//     head = p;
//     p->next = NULL;

//     for (i = 0; i < 3; i++)
//     {
//         pr = p;
//         p = (link *)malloc(sizeof(link *));
//         pr->next = p;
//         scanf("%d", &p->data);
//         p->next=NULL;
//     }

//     pr=head;
//     while(pr)
//     {
//         printf("%3d",pr->data);
//         pr=pr->next;
//     }
//     printf("\n");

//     system("pause");
//     return 0;
// }
