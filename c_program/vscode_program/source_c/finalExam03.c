//  模拟手机通讯录管理系统，实现对通讯录进行管理。需要对联系人姓名、电话进行管理，
//利用结构体变量记录联系人的姓名、电话，建立单向链表来存放联系人的信息。
// 要求实现如下功能：
// （1）写函数create()实现建立单链表来存放联系人的信息，如果输入大写‘Y’字符则继续创建结点存
//  储联系人信息，否则按任意键结束输入。
// （2）写自定义函数输出链表中联系人信息。
// （3）写自定义函数查询联系人的信息。
// （4）写自定义函数释放链表所占内存。
// （在主函数依次调用各函数即可）
//   结构体类型定义如下：
//  struct friends{
//     char name[20];
//     char phone[12];
//     struct friends*next;
//    };

// 程序运行示例1：
// 请依次输入每个联系人姓名，电话：
// wu 13623456
// 是否继续输入,按Y键继续输入，其他键就结束.
// Y
// 请依次输入每个联系人姓名，电话：
// zhang 34567812
// 是否继续输入,按Y键继续输入，其他键就结束.
// Y
// 请依次输入每个联系人姓名，电话：
// zhao 891234
// 是否继续输入,按Y键继续输入，其他键就结束.

// 输出所有联系人信息为:姓名 电话
// wu 13623456
// zhang 34567812
// zhao 891234
// 请输入要查找联系人姓名：
// li
// 不存在此联系人

// 程序运行示例2：
// 请依次输入每个联系人姓名，电话：
// wu 13623456
// 是否继续输入,按Y键继续输入，其他键就结束.
// Y
// 请依次输入每个联系人姓名，电话：
// zhang 34567812
// 是否继续输入,按Y键继续输入，其他键就结束.
// Y
// 请依次输入每个联系人姓名，电话：
// zhao 891234
// 是否继续输入,按Y键继续输入，其他键就结束.

// 输出所有联系人信息为:姓名 电话
// wu 13623456
// zhang 34567812
// zhao 891234
// 请输入要查找联系人姓名：
// wu
// 该联系人的姓名：wu 电话：13623456

// 输入提示："请依次输入每个联系人姓名，电话： \n"
// 输入格式："%s %s"
// 输入提示："是否继续输入,按Y键继续输入，其他键就结束.\n"
// 输入提示："请输入要查找联系人姓名：\n"
// 输入格式：%s

// 输出提示："输出所有联系人信息为:姓名 电话\n"
// 输出格式："%s %s\n"
// 查找输出提示：找到了则输出："该联系人的姓名：%s 电话：%s   \n"
//             找不到则输出提示："不存在此联系人\n"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

struct friends
{
    char name[20];
    char phone[12];
    struct friends *next;
};

struct friends *AppendNode(struct friends *head)
{
    struct friends *p = NULL, *pr = head;
    p = (struct friends *)malloc(sizeof(struct friends *));
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        while (pr->next != NULL)
        {
            pr = pr->next;
        }
        pr->next = p;
    }
    printf("请依次输入每个联系人姓名，电话： \n");
    scanf("%s %s", &p->name, &p->phone);
    p->next = NULL;
    return head;
}

void displyNode(struct friends *head)
{
    struct friends *p = head;
    if (head != NULL)
    {
        printf("输出所有联系人信息为:姓名 电话\n");
        while (p != NULL)
        {
            printf("%s %s\n", p->name, p->phone);
            p = p->next;
        }
    }
}

int find(struct friends *head, char f[100])
{
    struct friends *p = head;
    int flag = 0;
    while (p != NULL)
    {
        if (strcmp(f, p->name) == 0)
        {
            printf("该联系人的姓名：%s 电话：%s   \n", p->name, p->phone);
            flag = 1;
        }
        p = p->next;
    }
    if (flag == 0)
    {
        printf("不存在此联系人\n");
    }
    return 0;
}

struct friends *fr(struct friends *head)
{
    struct friends *p = head, *pr = NULL;
    while (p != NULL)
    {
        pr = p;
        p = p->next;
        free(pr);
    }
    head = NULL;
    return head;
}

int main()
{
    char c;
    char f[100];
    struct friends *head = NULL;
    head = AppendNode(head);

    printf("是否继续输入,按Y键继续输入，其他键就结束.\n");
    scanf(" %c", &c);
    while (c == 'Y')
    {
        head = AppendNode(head);
        printf("是否继续输入,按Y键继续输入，其他键就结束.\n");
        scanf(" %c", &c);
    }

    displyNode(head);

    printf("请输入要查找联系人姓名：\n");
    scanf("%s", f);

    find(head, f);

    head = fr(head);

    displyNode(head);

    system("pause");
    return 0;
}