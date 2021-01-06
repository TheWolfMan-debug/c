// /* 2.(40分) 模拟商场会员积分兑换：
// 结构体类型定义如下：
//  struct member{
//     char name[20];
//     char num[20];
//     int total;
//     struct member *next;
//    };
// 要求实现如下功能：
// （1）建立链表：自定义函数建立单链表来存放会员的信息，如果输入大写‘Y’字符则继续创建结点存
// 储会员信息，否则按任意键结束输入。
// （2）积分兑换：自定义函数按照编号查找会员，并为这个会员兑换积分，5000分兑换10元，
// 输入要兑换的积分数，输出兑换了多少元和剩余积分。如果没有找到，输出此会员不存在。
// （3）写自定义函数释放链表所占内存。
// （在主函数依次调用各函数即可）
// 输入输出如下：
// **创建节点提示："请依次输入每个会员的编号、姓名、积分： \n"
// **输入节点数据格式："%s %s %d"
// **是否继续创建提示："是否继续输入,按Y键继续输入，其他键就结束.\n"
// **输入提示："请输入要兑换积分的会员编号：\n"
// **输入格式："%s"
// 如果没找到，输出"此会员不存在.\n"
// 找到了，完成兑换
// **输入提示："5000分兑换10元，你想兑换多少积分？\n"
// **输入格式："%d"
// **输出格式："你兑换了%d元,剩余积分为：%d\n"

// 程序运行示例1：
// 请依次输入每个会员的编号、姓名、积分： ↙
// 1 zhang 30600
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// Y
// 请依次输入每个会员的编号、姓名、积分： ↙
// 2 li 20008
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// Y
// 请依次输入每个会员的编号、姓名、积分： ↙
// 3 fu 10000
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// n
// 请输入要兑换积分的会员编号：↙
// 4
// 此会员不存在.↙

// 程序运行示例2：
// 请依次输入每个会员的编号、姓名、积分： ↙
// 1 zhang 30600
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// Y
// 请依次输入每个会员的编号、姓名、积分： ↙
// 2 li 20008
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// Y
// 请依次输入每个会员的编号、姓名、积分： ↙
// 3 fu 10000
// 是否继续输入,按Y键继续输入，其他键就结束.↙
// n
// 请输入要兑换积分的会员编号：↙
// 1
// 5000分兑换10元，你想兑换多少积分？↙
// 15000
// 你兑换了30元,剩余积分为：15600↙ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

struct member
{
    char name[20];
    char num[20];
    int total;
    struct member *next;
};

struct member *AppendNode(struct member *head)
{
    struct member *p = NULL, *pr = head;
    p = (struct member *)malloc(sizeof(struct member));
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        pr=head;
        while (pr->next != NULL)
        {
            pr = pr->next;
        }
        pr->next = p;
    }
    printf("请依次输入每个会员的编号、姓名、积分： \n");
    scanf("%s %s %d", &p->num, &p->name, &p->total);
    p->next = NULL;
    return head;
}

int find(struct member *head, char x[100])
{
    struct member *p = head;
    int flag = 0;
    int s;
    while (p != NULL)
    {
        if (strcmp(p->num, x) == 0)
        {
            printf("5000分兑换10元，你想兑换多少积分？\n");
            scanf("%d", &s);
            printf("你兑换了%d元,剩余积分为：%d\n", s / 5000 * 10, p->total - s);
            p->total -= s;
            flag = 1;
        }
        p = p->next;
    }
    if (flag == 0)
    {
        printf("此会员不存在.\n");
    }
    return 0;
}

int main()
{
    struct member *head=NULL;
    char c;
    char num[100];
    do
    {

        head = AppendNode(head);
        getchar();
        printf("是否继续输入,按Y键继续输入，其他键就结束.\n");
        scanf("%c", &c);

    } while (c == 'Y');

    printf("请输入要兑换积分的会员编号：\n");
    scanf("%s", num);

    find(head, num);

    system("pause");
    return 0;
}
