#include <stdio.h>
#include <stdlib.h>

void Input(int *p, int n);
void Output(int *p, int n);
void Insert(int *p, int index, int n);

int main()
{
    int *p = NULL;
    int n, index;
    printf("原有顺序表的长度：\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("没有足够内存!\n");
        exit(1);
    }
    printf("请按递增顺序输入数据元素：\n");
    Input(p, n);
    Output(p, n);
    printf("\n请输入要插入的元素：\n");
    scanf("%d", &index);
    Insert(p, index, n);
    printf("插入元素之后的顺序表：\n");
    Output(p, n + 1);
    system("pause");

    return 0;
}

void Input(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
}

void Output(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }
    printf("\n");

}

void Insert(int *p, int index, int n)
{
    int i, location;
    int find = 0;
    for (i = 0; !find; i++)
    {
        if (index < p[i])
        {
            location = i;
            find = 1;
            break;
        }
    }
    p = (int *)realloc(p, (n + 1)*sizeof(int));

    for (i = n; i > location; i--)
    {
        p[i] = p[i-1];
    }
    p[location] = index;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <time.h>
// #include <ctype.h>
// #include <setjmp.h>
// #include <signal.h>
// #include <stdarg.h>
// #include <assert.h>
// #include <locale.h>

// #define N 10

// void initarray(int array[])
// {
//     int i;
//     for (i = 0; i < N; i++)
//     {
//         array[i] = i + 5;
//     }
// }

// void printarray(int array[])
// {
//     int i;
//     for (i = 0; i < N; i++)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int binarraysearch(int array[], int n)
// {
//     int mid = (N - 1) / 2, max = N - 1, min = 0;
//     while (min <= max)
//     {
//         if (array[mid] == n)
//         {
//             return mid;
//         }
//         else if (array[mid] > n)
//         {
//             max = mid - 1;
//         }
//         else if (array[mid] < n)
//         {
//             min = mid + 1;
//         }
//         mid = (max + min) / 2;
//     }
//     return -1;
// }

// int main()
// {
//     int array[N];
//     int n, x;
//     scanf("%d", &n);

//     initarray(array);
//     printarray(array);
//     x = binarraysearch(array, n);

//     if (x != -1)
//     {
//         printf("%d\n", x);
//     }
//     else
//     {
//         printf("数组中不存在这个数\n");
//     }

//     putchar('\n');
//     system("pause");
//     return 0;
// }

// void test01(int a, void (*p)(int a))
// {
//     p(a);
// }

// void test02(int a)
// {
//     printf("%d", a);
// }

// int main(int argc, char const *argv[])
// {
//     int a = 5;
//     test01(a, &test02);

//     printf("\n");
//     system("pause");
//     return 0;
// }

// int max(int x, int y)
// {
//     printf("%d,%d\n",x,y);
//     return x > y ? x : y;
// }

// int min(int x, int y)
// {
//     printf("%d,%d\n",x,y);
//     return x > y ? y : x;
// }

// int main(void)
// {
//     srand(time(NULL));

//     /* p 是函数指针 */
//     int (*p)(int, int) = &max; // &可以省略
//     int a, b, c, d;

//     // printf("请输入三个数字:");
//     // scanf("%d %d %d", &a, &b, &c);

//     /* 与直接调用函数等价，d = max(max(a, b), c) */
//     d = p(p(rand() % 100 + 1, rand() % 100 + 1), rand() % 100 + 1);

//     printf("最大的数字是: %d\n", d);

//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <time.h>
// #include <ctype.h>
// #include <setjmp.h>
// #include <signal.h>
// #include <stdarg.h>
// #include <assert.h>
// #include <locale.h>

// typedef enum PointerTag
// {
//     link,
//     Thread
// } PointerTag;

// typedef struct BiThrNode
// {
//     int data;
//     struct BiThrNode *lchild, *rchild;
//     PointerTag LTag, RTag;
// } BiThrNode, *BithrTree;

// union Data {
//     int i;
//     float f;
//     char str[20];
// };

// int main()
// {
//     BiThrNode j;
//     j.data=1;
//     printf("%d\n",j.data);

//     BithrTree i;
//     i=(BiThrNode *)malloc(sizeof(BiThrNode ));
//     i->data = 1;
//     printf("%d", i->data);

//     // printf("%d", i->data);

//     // PointerTag i = link;
//     // PointerTag j = Thread;

//     // printf("%d,%d\n", i, j);

//     // union Data data;

//     // data.i = 10;
//     // printf("data.i : %d\n", data.i);

//     // data.f = 220.5;
//     // printf("data.f : %f\n", data.f);

//     // strcpy(data.str, "C Programming");
//     // printf("data.str : %s\n", data.str);

//     putchar('\n');
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct mylink
// {
//     int data;
//     struct mylink *next;
// };
// typedef struct mylink link;

// int main()
// {
//     link *head, *p, *pr;
//     head = (link *)malloc(sizeof(link ));
//     head->data = 1;
//     p = (link *)malloc(sizeof(link ));
//     p->data = 2;

//     head->next = p;
//     p->next = NULL;

//     pr = head;
//     while (pr)
//     {
//         printf("%d  ", pr->data);
//         pr = pr->next;
//     }
//     printf("\n");

//     // free(head);

//     printf("hello,vscode\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");
//     printf("你好，中国\n");

//     system("pause");
//     return 0;
// }
